#!/usr/bin/env zsh
zip -r $1 . -x "Makefile" -x "scaffold.sh" -x "package.sh" -x "template.c" -x "*.swp*" -x "*.out*" -x ".DS_Store"
