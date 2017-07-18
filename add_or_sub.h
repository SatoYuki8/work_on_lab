declare add_or_sub{
  input a<13>;
  input b<13>;
  output result<13>;
  output cout;
  instrin add;
  instrin sub;

  instr_arg add(a, b);
  instr_arg sub(a, b);
}
