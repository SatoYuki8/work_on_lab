declare round_process{
    input frac<13>;
    input sticky;
    output result<13>;
    output cout;
    instrin do;

    instr_arg do(frac, sticky);
}
