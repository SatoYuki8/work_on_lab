arg1 = ARGV.shift
A = 0..2047
B = 0..2047
time = 1
for a in A
  for b in B
      if arg1 == "gensec" then
        if a > b
          print format("set a %011b00; set b %011b00; forward +1;\n", a, b)
        end
      else
        print format("...");
      end
      time = time + 1
  end
end
