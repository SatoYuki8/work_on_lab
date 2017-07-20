arg1 = ARGV.shift
A = 0..31
B = 0..31
time = 1
for a in A
  for b in B
      if arg1 == "gensec" then
          print format("set a 0%05b%010b; set b 0%05b%010b; forward +1;\n", a, a*9, b, b*9)
      else
        print format("...");
      end
      time = time + 1
  end
end
