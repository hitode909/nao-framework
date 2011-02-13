require "erb"

class ClassClass
  attr_accessor :name,:parent,:directory
  def initialize()
    @virtual_private_methods = []
    @virtual_public_methods = []
    @private_methods = []
    @public_methods = []
    @public_attributes = []
    @private_attributes = []
    @include_pathes = []
    yield self if block_given?
    self.to_file
  end

  def name(name = nil)
    @name = name if name
    return @name
  end

  def parent(parent = nil)
    @parent = parent if parent
    return @parent
  end

  def directory(directory = nil)
    @directory = directory if directory
    return @directory
  end

  def private()
    @is_private_mode = true
    yield self if block_given?
    @is_private_mode = false
    self
  end

  def private?
    @is_private_mode
  end

  def virtual_method(signiture)
    @private? ? @virtual_private_methods : @virtual_public_methods << signiture
  end
  
  def method(signiture)
    @private? ? @private_methods : @public_methods << signiture
  end
  
  def attribute(signiture)
    @private? ? @private_attributes : @public_attributes << signiture
  end

  def include_path(signiture)
    @include_pathes << signiture
  end
  
  def process_file(temlate_filename)
    erb = ERB.new(open(File.expand_path(File.dirname(__FILE__) + temlate_filename)).read, nil, '-')
    erb.result(binding)
  end

  def to_header
    process_file("h.erb")
  end

  def to_cpp
    process_file("cpp.erb")
  end

  def filename(ext_name)
    return File.join(self.directory, "#{self.name}.#{ext_name}")
  end 

  def to_file
    Dir.mkdir(self.directory) unless File.exist?(self.directory)
    open(filename("h"), "w"){|f|
      f.write self.to_header
    }
    open(filename("cpp"), "w"){|f|
      f.write self.to_cpp
    }
  end
end


ClassClass.new{|c|
  c.name "Framework"
  c.parent "Oya"
  c.directory "framework"
  c.virtual_method "void setup()"
  c.method "void public()"
  c.include_path "inteface/kick.h"
  c.private{|c|
    c.method "void private_setup()"
  }
}

puts "make done"
