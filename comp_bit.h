/* 1bit A > B */
/* 1bit A < B */
/* 1bit A = B */

declare comp_bit{
    input a, b;
    input fin;
    output fout;
    instrin do;
    
    instr_arg do(a,b,fin);
}
