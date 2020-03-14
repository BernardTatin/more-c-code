// ======================================================================
// pstring.h
// Created by bernard on 11/03/2020.
// a string library
// ======================================================================

#ifndef MORE_C_CODE_PSTRING_H
#define MORE_C_CODE_PSTRING_H

#define PSTR_DELTA_ALLOC    32

typedef struct PString PString;

PString *pstrnew(char *str);
void pstrdelete(PString *pstr);
PString *pstrcat(PString *p1, PString *p2);
int pstrlen(PString *pstr);
int pstrallocated(PString *pstr);
char *pstr2char(PString *pstr);

static inline int get_len_alloc(const int str_len) {
    return (str_len + 1 + PSTR_DELTA_ALLOC) & ~(PSTR_DELTA_ALLOC - 1);
}

#endif //MORE_C_CODE_PSTRING_H
