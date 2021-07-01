//
// cat-0.0.c
// first version of cat:
//  - copy all files of the command line to stdout
//  - that's all
// Created by bernard on 26/04/2020.
//

#include <stdio.h>
#include <stdint.h>

const int BUFFER_SIZE = 4096;

int main(int argn, char **argv) {
  int bads = 0;
  int8_t buffer[BUFFER_SIZE];

  argv++;
  for (int i=1; i<argn; i++, argv++) {
    FILE *f;
    if ((f = fopen(*argv, "r")) == NULL) {
      bads++;
    } else {
      int byte_count;
      while ((byte_count = fread(buffer, 1, BUFFER_SIZE, f)) > 0) {
        byte_count= fwrite(buffer, 1, byte_count, stdout);
      }
      fclose (f);
    }
  }
  return bads;
}
