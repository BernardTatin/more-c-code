// ======================================================================
// pstring.c
// Created by bernard on 11/03/2020.
// a string library
// ======================================================================

#include <string.h>
#include <stdlib.h>

#include "pstring.h"

TSPstring *pstring_new(char *str) {
    TSPstring *pstr = (TSPstring *)malloc(sizeof(TSPstring));
    int len0 = strlen(str);
    int len_alloc = (len0 + 1 + PSTR_DELTA_ALLOC + 1) & ~(PSTR_DELTA_ALLOC - 1);

    pstr->string = (char *)malloc(len_alloc);
    memmove(pstr->string, str, len0+1);
    pstr->length = len0;
    pstr->allocated = len_alloc;
    return pstr;
}


