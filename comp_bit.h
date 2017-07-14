/* 1bit A > B */
/* 1bit A < B */
/* 1bit A = B */

declare comp_bit{
    input a, b;
    output l;     /*a > b*/
    output s;     /*a < b*/
    output eq;    /*a = b*/
    instrin do;
    
    instr_arg do(a,b);
}
