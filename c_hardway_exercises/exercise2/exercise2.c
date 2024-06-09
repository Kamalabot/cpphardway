#include <stdio.h>

int main(int argc, char *argv[]){
	int distance = 100;
	char flzag = 'F';
	float weight = 25.7688;
	char name[] = "SuperMario"; // did not expect that string dtype is not avbl
	// this is a comment
	printf("The distance is %d \n", distance);
	printf("The flzag is %c \n", flzag);
	printf("The decimal float is %.3f \n", weight);  // this automatically rounds up the extra decimal
	printf("The name of the supreme lord is %s \n", name);
	return 0;
}
