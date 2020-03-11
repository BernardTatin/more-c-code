// ======================================================================
// pstring.h
// Created by bernard on 11/03/2020.
// a string library
// ======================================================================

#ifndef MORE_C_CODE_PSTRING_H
#define MORE_C_CODE_PSTRING_H

#define PSTR_DELTA_ALLOC    32

typedef struct _TSPstring {
    char *string;
    int length;
    int allocated;
} TSPstring;

TSPstring *pstring_new(char *str);

#endif //MORE_C_CODE_PSTRING_H
