declare sub_shift{
  input exp_a<5>;
  input exp_b<5>;
  input frac_b<13>;
  output shifted_frac_b<13>;
  output sticky; 
  instrin do;

  instr_arg do(exp_a, exp_b, frac_b);
}
