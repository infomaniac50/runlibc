#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void tolower_stdin(void);
void tolower_arg1(char* arg);

int main(int argc, char** argv) {

  if (argc > 1) {
    tolower_arg1(argv[1]);
  }
  else {
    tolower_stdin();
  }

  return 0;
}

void tolower_arg1(char* arg) {
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

      if (isupper(c)) {
        c = tolower(c);
      }

      putchar(c);
    }
  }
}

void tolower_stdin(void) {
  unsigned char c = getchar();

  while (!feof(stdin)) {
    if (isupper(c)) {
      c = tolower(c);
    }

    putchar(c);
    c = getchar();
  }
}