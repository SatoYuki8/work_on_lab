declare exp_inc_right_shift{
  input exp<5>;
  input frac<13>;
  output inc_exp<5>;
  output shifted_frac<13>;
  instrin do;

  instr_arg do(exp, frac);
}
