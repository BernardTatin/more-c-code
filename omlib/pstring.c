// ======================================================================
// pstring.c
// Created by bernard on 11/03/2020.
// a string library
// ======================================================================

#include <string.h>
#include <stdlib.h>

#include "inner_pstring.h"
#include "pstring.h"



PString *pstrnew(char *str) {
    PString *pstr = (PString *)malloc(sizeof(PString));
    int len0 = strlen(str);
    int len_alloc = get_len_alloc(len0);

    pstr->string = (char *)malloc(len_alloc);
    memmove(pstr->string, str, len0+1);
    pstr->length = len0;
    pstr->allocated = len_alloc;
    return pstr;
}

void pstrdelete(PString *pstr) {
    if (pstr != NULL) {
        if (pstr->string != NULL) {
            free(pstr->string);
        }
        free(pstr);
    }
}

PString *pstrcat(PString *p1, PString *p2) {
    int new_length = p1->length + p2->length;

    if (new_length  + 1 > p1->allocated) {
        int new_alloc = get_len_alloc(new_length);

        p1->string = (char *)realloc(p1->string, new_alloc);
        p1->allocated = new_alloc;
    }
    memmove(p1->string + p1->length, p2->string, p2->length + 1);
    p1->length = new_length;
    return p1;
}

PString *pstrcpy(PString *p1, PString *p2) {
  int new_length = p2->length;

  if (new_length + 1 > p1->allocated) {
    int new_alloc = p2->allocated;
    p1->string = (char *)realloc(p1->string, new_alloc);
    p1->allocated = new_alloc;
  }
  memmove(p1->string, p2->string, p2->length + 1);
  p1->length = new_length;
  return p1;
}

int pstrlen(PString *pstr) {
  return pstr->length;
}

int pstrallocated(PString *pstr) {
  return pstr->allocated;
}

char *pstr2char(PString *pstr) {
  return pstr->string;
}
