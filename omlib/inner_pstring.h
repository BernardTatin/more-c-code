//
// Created by bernard on 15/03/2020.
//

#ifndef MORE_C_CODE_INNER_PSTRING_H
#define MORE_C_CODE_INNER_PSTRING_H

struct PString {
  char *string;
  int length;
  int allocated;
};

#define PSTR_DELTA_ALLOC    32
static inline int get_len_alloc(const int str_len) {
  return (str_len + 1 + PSTR_DELTA_ALLOC) & ~(PSTR_DELTA_ALLOC - 1);
}

#endif // MORE_C_CODE_INNER_PSTRING_H
