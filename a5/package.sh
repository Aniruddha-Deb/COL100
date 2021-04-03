#!/usr/bin/env zsh
mkdir $1

for f in */; do
	var="$f"
	temp="${var:0:1}"
	f2="${var:2}"
	f3="${f2%%/}"
	cp "${f}${f3}.c" "$1/q${temp}.c"
	cp "${f}ss.png" "$1/q${temp}_ss.png"
done

zip -r "${1}_final.zip" "$1"
