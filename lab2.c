#include <stdio.h>


void Stack() {
	int stack[255];
	int tail = 0;
	int i;
	char mode = 'i';
	while (mode != 'e'){
		printf("\nAdd element, Remove element, Print the stack or Exit? <a/r/p/e>:\n[stack 1]>>> ");
		scanf(" %c", &mode);
		while ((getchar()) != '\n');

		if (mode == 'a' || mode == 'A'){
			printf("What is your element?\n[stack 1]>>> ");

			scanf("%d", &stack[tail]);
			tail++;
		}
		else if (mode == 'r' || mode == 'R'){
			if (tail != 0){
				tail--;
				printf("Element removed from the stack\n");
			}
			else 
				printf("There is nothing to delete!\n");
		}
		else if (mode == 'p' || mode == 'P'){
			for(i = 0; i < tail; i++)
				printf("%d ", stack[i]);
			if (tail == 0)
				printf("There is nothing to print!");
			printf("\n");

			
		}
		else if (mode == 'e' || mode == 'E'){
			printf("\n");
		}
		else
			printf("Come on! This is not that difficult...\n");
	}


	int stack2[255];
	int tail2 = 0;
	mode = 'i';
	while (mode != 'e'){
		printf("\nAdd element, Remove element, Print the stack or Exit? <a/r/p/e>:\n[stack 2]>>> ");
		scanf(" %c", &mode);
		while ((getchar()) != '\n');

		if (mode == 'a' || mode == 'A'){
			printf("What is your element?\n[stack 2]>>> ");

			scanf("%d", &stack2[tail2]);
			tail2++;
		}
		else if (mode == 'r' || mode == 'R'){
			if (tail2 != 0){
				tail2--;
				printf("Element removed from the stack\n");
			}
			else 
				printf("There is nothing to delete!\n");
		}
		else if (mode == 'p' || mode == 'P'){
			for(i = 0; i < tail2; i++)
				printf("%d ", stack2[i]);
			if (tail2 == 0)
				printf("There is nothing to print!");
			printf("\n");

			
		}
		else if (mode == 'e' || mode == 'E'){
			printf("\n");
		}
		else
			printf("Come on! This is not that difficult...\n");
	}

	int stack3[255];
	int tail3 = 0;
	mode = 'i';
	while (mode != 'e'){
		printf("\nAdd element, Remove element, Print the stack or Exit? <a/r/p/e>:\n[stack 3]>>> ");
		scanf(" %c", &mode);
		while ((getchar()) != '\n');

		if (mode == 'a' || mode == 'A'){
			printf("What is your element?\n[stack 3]>>> ");

			scanf("%d", &stack3[tail3]);
			tail3++;
		}
		else if (mode == 'r' || mode == 'R'){
			if (tail3 != 0){
				tail3--;
				printf("Element removed from the stack\n");
			}
			else 
				printf("There is nothing to delete!\n");
		}
		else if (mode == 'p' || mode == 'P'){
			for(i = 0; i < tail3; i++)
				printf("%d ", stack3[i]);
			if (tail3 == 0)
				printf("There is nothing to print!");
			printf("\n");

			
		}
		else if (mode == 'e' || mode == 'E'){
			printf("\n");
		}
		else
			printf("Come on! This is not that difficult...\n");
	}


/*Let's unify them!*/
	int stack4[255]; 
	int tail4 = tail + tail2 + tail3;
	for(i = 0; i < tail; i++)
                stack4[i] = stack[i];
	for(i = 0; i < tail2; i++)
		stack4[tail + i] = stack2[i];
	for(i = 0; i < tail3; i++)
		stack4[tail + tail2 +i] = stack3[i];


	mode = 'i';
	while (mode != 'e'){
		printf("\nAdd element, Remove element, Print the stack or Exit? <a/r/p/e>:\n[unified stack]>>> ");
		scanf(" %c", &mode);
		while ((getchar()) != '\n');

		if (mode == 'a' || mode == 'A'){
			printf("What is your element?\n[unified stack]>>> ");

			scanf("%d", &stack4[tail4]);
			tail4++;
		}
		else if (mode == 'r' || mode == 'R'){
			if (tail4 != 0){
				tail4--;
				printf("Element removed from the stack\n");
			}
			else 
				printf("There is nothing to delete!\n");
		}
		else if (mode == 'p' || mode == 'P'){
			for(i = 0; i < tail4; i++)
				printf("%d ", stack4[i]);
			if (tail4 == 0)
				printf("There is nothing to print!");
			printf("\n");

			
		}
		else if (mode == 'e' || mode == 'E'){
			printf("Have a nice day!\n");
		}
		else
			printf("Come on! Just follow sharking rules!\n");

	}
	          

}


int main() {
char exit = 'y';

        printf("\033[H\033[J");
        printf("░░░█▀▄░█▀█░▀█▀░█▀█░█▀▄░█▀█░█▀▀░█▀▀░█▀▀░░░\n");
        printf("░░░█░█░█▀█░░█░░█▀█░█▀▄░█▀█░▀▀█░█▀▀░▀▀█░░░\n");
        printf("░░░▀▀░░▀░▀░░▀░░▀░▀░▀▀░░▀░▀░▀▀▀░▀▀▀░▀▀▀░░░\n");
        printf("░░░░░░░░░░░░░█░░░█▀█░█▀▄░▀▀▄░░░░░░░░░░░░░\n");
        printf("░░░░░░░░░░░░░█░░░█▀█░█▀▄░▄▀░░by scan-87░░\n");
        printf("░░░░░░░░░░░░░▀▀▀░▀░▀░▀▀░░▀▀▀░░░░░░░░░░░░░\n");


        while (exit != 'n'){
                Stack();
                //printf("\nDo you want to continue? <y/n>: \n>>> ");
                //scanf(" %c", &exit);
		exit = 'n';
        }

        printf("\033[H\033[J");

}
