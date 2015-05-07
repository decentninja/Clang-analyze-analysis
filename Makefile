analyze: everything.c
	clang --analyze everything.c

everything: everything.c
	clang everything.c -o everything


