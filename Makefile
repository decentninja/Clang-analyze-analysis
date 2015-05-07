analyze: everything.c
	clang --analyze everything.c

everything: everything.c
	clang -Wall everything.c -o everything


