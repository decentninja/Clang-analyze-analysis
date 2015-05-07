useafterfree: useafterfree.c
	clang useafterfree.c -o useafterfree


analyze: useafterfree.c
	clang --analyze useafterfree.c
