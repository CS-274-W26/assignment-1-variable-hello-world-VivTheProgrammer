#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int random_number;

	srand(time(NULL)); // seeds the PRNG thingy

	random_number = rand() % 10; // starts generating a random number between 0 and 10

	if (random_number >0 && random_number <=4){
		printf("Eat more beef, kick less cats\n");
	
	} else if (random_number >= 5 && random_number <=9){
		printf("FRODO LIVES\n");
	
	} else {
		printf("Larn is the best rougelike\n");

	}

	printf("The random number was: %d\n", random_number);
}