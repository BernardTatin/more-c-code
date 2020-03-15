//
// Created by bernard on 12/03/2020.
//
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "pstring.h"

static inline void debug_pstr(PString *pstr) {
    printf("%s, %d, %d\n",
           pstr2char(pstr), pstrlen(pstr), pstrallocated(pstr));
}

int main(void) {
    printf("======================================================================\n");
    // for this test, you must include inner_pstring.h
    /*
    printf("\n\n get_len_alloc:\n");
    for (int i=0; i<257; i++) {
        if ((i & 15) == 0) {
            putchar('\n');
        }
        printf("%4d", get_len_alloc(i));
    }*/

    PString *hello = pstrnew("Hello! La phrase stupide des livres de programmation pour débutant.");

    debug_pstr(hello);

    PString *s0 = pstrnew("hello");
    PString *s1 = pstrnew(" you!!!");
    PString *s2 = pstrnew(" and you, and you, and you too...");

    debug_pstr(s0);
    debug_pstr(s1);
    debug_pstr(s2);
    s0 = pstrcat(s0, s1);
    debug_pstr(s0);
    s0 = pstrcat(s0, s2);
    debug_pstr(s0);

    printf("strcpy...\n");
    pstrcpy(s0, s2);
    debug_pstr(s0);
    pstrcpy(s0, s1);
    debug_pstr(s0);
    printf("======================================================================\n");
    return 0;
}
