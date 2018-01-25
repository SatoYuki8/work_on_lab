arg1 = ARGV.shift
A = 0..31
B = 0..31
time = 1
for a in A
  for b in B
      if arg1 == "gensec" then
          print format("set a 0%05b%010b; set b 0%05b%010b; forward +1;\n", a, a*7, b, b*4)
      else
        print format("...");
      end
      time = time + 1
  end
end
