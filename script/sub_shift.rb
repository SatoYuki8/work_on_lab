arg1 = ARGV.shift
A = 0..31
B = 0..31
C = 0..1023
time = 1
for a in A
  for b in B
    for c in C
      if arg1 == "gensec" then
        if a > b 
          print format("set exp_a %05b; set exp_b %05b; set frac_b 1%010b00; forward +1;\n", a, b, c)
          end
      else
        print format("...");
      end
      time = time + 1
    end
  end
end
