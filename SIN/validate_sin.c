#include <stdio.h>
#include <stdlib.h>

int populate_array(int, int *);
int check_sin(int *);


int main(int argc, char **argv) {
    // TODO: Verify that command line arguments are valid.
    // TODO: Parse arguments and then call the two helpers in sin_helpers.c
    // to verify the SIN given as a command line argument.
if(argc == 2){
int final = strtol(argv[1], NULL, 10);
int s_a[9];
int a = populate_array(final, s_a);
	if (a==0){
	int c = check_sin(s_a);
		if(c == 0){
		printf("Valid SIN\n");
		}

		else{
		printf("Invalid SIN\n");
		}
	}
}
	if(argc != 2){
	return 1;
	}
return 0;
}
