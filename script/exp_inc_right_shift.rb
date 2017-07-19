arg1 = ARGV.shift
A = 0..31
B = 0..2047
time = 1
for a in A
  for b in B
      if arg1 == "gensec" then
        print format("set exp %05b; set frac %011b00; forward +1;\n", a, b)
      else
        print format("...");
      end
      time = time + 1
  end
end
