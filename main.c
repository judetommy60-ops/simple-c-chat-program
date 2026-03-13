// Program: Simple Conversation Program
// Author: Jude Tommy
// Description: A beginner C program that interacts with the user

# include <stdio.h>
# include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[50];
	char answer[50];
	int age;
	printf("Hello World!!\n");
	printf("I am new in programming\n");
	
	printf("How old are you then?\n ");
	scanf("%i", &age);
	
	printf("Vibe!!! \n");
	printf("What else can you tell me about yourself?\n ");
	
	printf("Like telling me, what's your name\n");
	scanf("%s", name);
	
	printf("Nice to meet you %s\n\n", name);
	
	printf("Tell me Machine to Human, how's life?\n ");
	scanf("%s", answer );
	
	if ( answer[0] == 'H' || answer[0] == 'h') {
			printf("Well you are a man  right, so power thorough it. hahahahahahah!\n");
}
	else {
		printf(" Okay, Then remember to keep smiling okay :)\n");
	}

	return 0;
}
