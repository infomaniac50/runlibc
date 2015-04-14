#!/bin/bash

if [[ ! -d bin/ ]]; then
  mkdir bin/
fi

echo "gcc --std=c89 -Wall --pedantic src/tolower.c -o bin/tolower"
gcc --std=c89 -Wall --pedantic src/tolower.c -o bin/tolower
echo "gcc --std=c89 -Wall --pedantic src/toupper.c -o bin/toupper"
gcc --std=c89 -Wall --pedantic src/toupper.c -o bin/toupper