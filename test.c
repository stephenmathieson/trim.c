
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "src/trim.h"

int main(int argc, char **argv) {
  char hello[] = " \n\t hello \n\t ";
  char hello_left[] = " \n\t hello";
  char hello_right[] = "hello \n\t ";

  assert(0 == strcmp("hello", trim(hello)));
  assert(0 == strcmp("hello", trim_left(hello_left)));
  assert(0 == strcmp("hello", trim_right(hello_right)));

  return 0;
}
