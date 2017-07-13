declare add_half{
  input a<16>, b<16>;
  output sum<16>;
  instrin do;

  instr_arg do(a, b);
}
