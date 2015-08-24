/* 4.4 in textbook. Typecasts integer to char and prints.
*/
#include <stdio.h>
#include <stdlib.h>
#define FIRST_VAL 32
#define LAST_VAL 127
#define ROW_INCREMENT 8

int
main(int argc, char *argv[]) {
	int i;
	printf("      +0  +1  +2  +3  +4  +5  +6  +7");
	for(i = FIRST_VAL; i<=LAST_VAL; i++){
		if(i % ROW_INCREMENT==0){
			printf("\n%3d |  ", i);
		}
		printf("%c   ", (char)i);

	}	
	return 0;
}