/*
 * goc main file, from where everything unfolds
 * by pharus to the world, let us make C attractive again
 * */
#include <stdio.h>
#include <stdlib.h>


void
usage(char * prog)
{
	printf("Usage: %s [Everything else to be done]\n", prog);
	exit(1);
}

int
main(int argc, char* argv[])
{
	if (argc) {
		usage(argv[0]);
	}	
	return 0;
}

