/*
Copyright (C) 2015  Derek Chafin

This program is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option)
any later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
more details.

You should have received a copy of the GNU General Public License along
with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

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