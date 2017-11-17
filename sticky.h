declare sticky_module{
    input frac<13>;
    input exp<5>;    /* shift amount */
    output result;
    instrin do;

    instr_arg do(frac, exp);
}
