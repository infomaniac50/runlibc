#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void toupper_stdin(void);
void toupper_arg1(char* arg);

int main(int argc, char** argv) {

  if (argc > 1) {
    toupper_arg1(argv[1]);
  }
  else {
    toupper_stdin();
  }

  return 0;
}

void toupper_arg1(char* arg) {
  int i;
  unsigned char c;
  /*
  Null pointer
  */
  if (arg == NULL) {
    return;
  }

  if (strlen(arg) > 0) {
    for (i = 0; i < strlen(arg); i++) {
      c = arg[i];

      if (islower(c)) {
        c = toupper(c);
      }

      putchar(c);
    }
  }
}

void toupper_stdin(void) {
  unsigned char c = getchar();

  while (!feof(stdin)) {
    if (islower(c)) {
      c = toupper(c);
    }

    putchar(c);
    c = getchar();
  }
}