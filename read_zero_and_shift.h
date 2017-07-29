declare read_zero_and_shift{
      input frac<13>;
      input exp<5>;
      output shifted_frac<13>;
      output sub_exp<5>;
      instrin do;
      
      instr_arg do(frac, exp);
}
