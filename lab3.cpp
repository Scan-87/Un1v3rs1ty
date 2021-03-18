#include <stdio.h>
#include <iostream>


void Stack1() {
	struct st {
	int inf;
	st *s;
	} * v1, * v2, * print_st1, * print_st2;

	v1=NULL;
	v2=NULL;	

	/*insert
	int x1 = 7;

	v1 = new st;
	v1 -> inf = x1;
	v1 -> s = v2;
	v2 = v1;

	//remove
	v1 = v1 -> s;
	delete v2;
	v2 = v1;

	printf("all right, there is your last element");
        printf("%d ", v1 -> inf);
	*/





	int insert;
	char mode = 'i';
	while (mode != 'e'){
		printf("\nAdd element, Remove element, Print the stack or Exit? <a/r/p/e>:\n[stack 1]>>> ");
		scanf(" %c", &mode);
		while ((getchar()) != '\n');

		if (mode == 'a' || mode == 'A'){
			printf("What is your element?\n[stack 1]>>> ");
			std::cin >> insert;
			
			v1 = new st;
			v1 -> inf = insert;
			v1 -> s = v2;
			v2 = v1;
		}
		else if (mode == 'r' || mode == 'R'){ //bug. Doesn't remove last element
			if (v1->s != NULL){
				v1 = v1 -> s;
				delete v2;
				v2 = v1;
				printf("Element removed from the stack\n");
			}
			else 
				printf("There is nothing to delete!\n");
		}
		else if (mode == 'p' || mode == 'P'){
			print_st1 = v1;
			std::cout << print_st1 -> inf;
			while (print_st1 -> s != NULL){
				print_st1 = print_st1 -> s;
				print_st2 = print_st1;
				std::cout << print_st2 -> inf;
			}	
		
			
		}
		else if (mode == 'e' || mode == 'E'){
			printf("\n");
		}
		else
			printf("Come on! This is not that difficult...\n");
	}
}

void Stack2() {
	struct st {
	int inf;
	st *s;
	} * v1, * v2, * print_st1, * print_st2;

	v1=NULL;
	v2=NULL;	

	/*insert
	int x1 = 7;

	v1 = new st;
	v1 -> inf = x1;
	v1 -> s = v2;
	v2 = v1;

	//remove
	v1 = v1 -> s;
	delete v2;
	v2 = v1;

	printf("all right, there is your last element");
        printf("%d ", v1 -> inf);
	*/





	int insert;
	char mode = 'i';
	while (mode != 'e'){
		printf("\nAdd element, Remove element, Print the stack or Exit? <a/r/p/e>:\n[stack 2]>>> ");
		scanf(" %c", &mode);
		while ((getchar()) != '\n');

		if (mode == 'a' || mode == 'A'){
			printf("What is your element?\n[stack 2]>>> ");
			std::cin >> insert;
			
			v1 = new st;
			v1 -> inf = insert;
			v1 -> s = v2;
			v2 = v1;
		}
		else if (mode == 'r' || mode == 'R'){ //bug. Doesn't remove last element
			if (v1->s != NULL){
				v1 = v1 -> s;
				delete v2;
				v2 = v1;
				printf("Element removed from the stack\n");
			}
			else 
				printf("There is nothing to delete!\n");
		}
		else if (mode == 'p' || mode == 'P'){
			print_st1 = v1;
			std::cout << print_st1 -> inf;
			while (print_st1 -> s != NULL){
				print_st1 = print_st1 -> s;
				print_st2 = print_st1;
				std::cout << print_st2 -> inf;
			}	
		
			
		}
		else if (mode == 'e' || mode == 'E'){
			printf("\n");
		}
		else
			printf("Come on! This is not that difficult...\n");
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
                Stack1();
		printf("\033[H\033[J");
                printf("\nDo you want to continue? <y/n>: \n>>> ");
                scanf(" %c", &exit);
		if (exit == 'y') {
			Stack2();
			printf("\nDo you want to continue? <y/n>: \n>>> ");
                	scanf(" %c", &exit);

		}

		exit = 'n';
        }

        printf("\033[H\033[J");

}
