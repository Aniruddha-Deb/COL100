for f in */; do
	var="$f"
	temp="${var:2}"
	temp2="${temp%%/}"
	cp template.c "${f}${temp2}.c"
done
