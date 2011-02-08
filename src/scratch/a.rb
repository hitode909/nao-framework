def methods(file)
  open(file).read.scan(/virtual (.*) = 0;/).flatten
end

Dir.glob("interface/I*.h").each{|filename|
  module_name = filename.scan(/I(.+?).h/).flatten.first
  open("mock/Mock#{module_name}.cpp", "w"){|f|
    f.puts "#include <iostream>"
    f.puts "#include \"../interface/I#{module_name}.h\""
    f.puts
    f.puts "class Mock#{module_name} : public I#{module_name}"
    f.puts "{"
    f.puts "public:"
    methods(filename).each{|method|
      f.puts method + "{"
      f.puts "std::cout << \"#{module_name}::#{method} called\" << std::endl;"
      f.puts "}"
    }
    f.puts "};"

  }
}
