//
// Created by bernard on 12/03/2020.
//
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "pstring.h"

int main(void) {
    TSPstring *hello = pstring_new("Hello! La phrase stupide des livres de programmation pour débutant.");

    printf("%s, %d, %d\n",
            hello->string, hello->length, hello->allocated);
    return 0;
}
