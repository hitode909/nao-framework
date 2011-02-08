Dir.glob("interface/I*.h").each{|filename|
  signiture = "__" + filename.split("/").last.gsub(".", "__").upcase + "__"
  p [filename, signiture]
  old = open(filename).read
  open(filename, "w"){|f|
    f.puts "#ifndef #{signiture}"
    f.puts "#define #{signiture}"
    f.puts
    f.puts old
    f.puts
    f.puts "#endif"
  }
}
