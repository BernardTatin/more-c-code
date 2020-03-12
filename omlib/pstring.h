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
void pstring_delete(TSPstring *pstr);
TSPstring *pstring_cat(TSPstring *p1, TSPstring *p2);

static inline int get_len_alloc(const int str_len) {
    return (str_len + 1 + PSTR_DELTA_ALLOC) & ~(PSTR_DELTA_ALLOC - 1);
}

#endif //MORE_C_CODE_PSTRING_H
