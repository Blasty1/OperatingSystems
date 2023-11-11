GOOD=whoami

target: compilingAndlinking
	./Test
	${GOOD}

compilingAndlinking:
	gcc -o Test \
	test.c
