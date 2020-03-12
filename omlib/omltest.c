//
// Created by bernard on 12/03/2020.
//
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "pstring.h"

static inline void debug_pstr(TSPstring *pstr) {
    printf("%s, %d, %d\n",
           pstr->string, pstr->length, pstr->allocated);
}

int main(void) {
    printf("======================================================================\n");
    printf("\n\n get_len_alloc:\n");
    for (int i=0; i<257; i++) {
        if ((i & 15) == 0) {
            putchar('\n');
        }
        printf("%4d", get_len_alloc(i));
    }
    TSPstring *hello = pstring_new("Hello! La phrase stupide des livres de programmation pour débutant.");

    debug_pstr(hello);

    TSPstring *s0 = pstring_new("hello");
    TSPstring *s1 = pstring_new(" you!!!");
    TSPstring *s2 = pstring_new(" and you, and you, and you too...");

    debug_pstr(s0);
    debug_pstr(s1);
    debug_pstr(s2);
    s0 = pstring_cat(s0, s1);
    debug_pstr(s0);
    s0 = pstring_cat(s0, s2);
    debug_pstr(s0);

    printf("======================================================================\n");
    return 0;
}
