#include <stdio.h>

/*So, this is our bubble-sorting algorithm function */
void Bubble()
{
	int arlen;		//just length of array
	int counter = 0;	//that's how we'll track down every comparison
	int i, j;
	printf("Please enter length of array: ");
	scanf("%d", &arlen);
	int array[arlen];
	printf("Please enter your array: \n");
	for ( i = 0; i < arlen; i++){
		scanf("%d", &array[i]);
	}


	int flag;		//that will help us to save time by skipin' checks
	int buf;
	for (j = 0; j < arlen-1; j++){
		flag = 0;
		for (i = 0; i < arlen-1; i++){
			if (array[i] < array[i+1]){
				buf = array[i+1];
				array[i+1] = array[i];
				array[i] = buf;
				flag = 1;
				counter++;	
			}
		}

		if (flag == 0) { 
			break; 
		}
	}
				


	//print everything
	for (i = 0; i < arlen; i++){
		printf("%d ", array[i]);
	}
	printf("\nTotal changes: %d", counter);
}


/*This is our extremum-sorting algorithm function*/
void Extrem(){
	int arlen, i, j, d;
	int counter = 0;
	printf("Please enter length of array: ");
	scanf("%d", &arlen);
	int array[255];
	printf("Please enter your array: \n");
	
	for ( i = 0; i < arlen; i++){
		scanf("%d", &array[i]);
	}

	for (j = 0; j < arlen; j++){
		d=array[j];
		for (i = j; i < arlen; i++){
			counter++;
			if (d < array[i]){
			d = array[i];
			array[i] = array[j];
			array[j] = d;
			}
		}
	}

	//print everything
        for ( i = 0; i < arlen; i++){
                printf("%d ", array[i]);
	}
	printf("\nTotal checks: %d", counter);
}



/*And finally, simple insert algorithm alongside with half-division method*/
/*Litterally, it took me 5 hours to make it work!*/
void Insert() {
	int i, j;
	int arlen;
	int flag;
	int buf;
	int counter = 0;
	printf("Please enter length of array: ");
	scanf("%d", &arlen);
	int array[255];
	printf("Please enter your sorted array: \n");
	
	for ( i = 0; i < arlen; i++){
		scanf("%d", &array[i]);
	}

	
/* Let's sort this array, just in case of stupid users */
	for (j = 0; j < arlen-1; j++){
                flag = 0;
                for (i = 0; i < arlen-1; i++){
                        if (array[i] < array[i+1]){
                                buf = array[i+1];
                                array[i+1] = array[i];
                                array[i] = buf;
                                flag = 1;
                                counter++;
                        }
                }
                if (flag == 0) {
                        break;
                }
        }
/* So, if user is really stupid */
	if (counter != 0){
		printf("\nHey! I told you to enter SORTED array! Anyway, I've done that for you... But only for now!\n");
	}


/* Anyway, let's continue */
	int el;		//element to insert

	char exit = 'i';
	while (exit != 'e'){
		printf("\nInsert element, print array or exit? <i/p/e>: ");
		scanf(" %c", &exit);
		while ((getchar()) != '\n');
		
		if (exit == 'i'){
                	printf("Ok, what is your element?\n");
			scanf("%d", &el);

			int b = -1; 		//b stands for begining
			int e = arlen;		//e stands for ending
			int mid;		//element in the middle (almost)

			while(e-b != 1){
				/*Let's find a sweet home for our element!*/
				if (((e-b) % 2) == 0)
					mid = (e - b)/2 + b; 
				else 
					mid = (e - b - 1)/2 + b;

				if (el < array[mid])
					b = mid;
				else
					e = mid;
			}

			//printf("\nSo here is your place: %d, %d", b, e); 
			/*And now we'll move some elements to the right in order to make some free space in the middle*/
			int s = arlen;
			while (s != b){
				array[s + 1] = array[s];
				s--;
			}
			array[s+1] = el;
			arlen++;


        	}
	        else if (exit == 'p'){
                	for ( i = 0; i < arlen; i++){
                		printf("%d ", array[i]);
        		}
        		printf("\n");
        	}
	        else if (exit == 'e'){
                	printf("Bye! btw, you're cool =)\n");
        	}
        	else
                	printf("stupid user detected\n");

		}

}



/*Main menu, of course*/
void main_menu(){
        char mode;

        printf("\nDo you want to use Bubble, Extrem or Insert? <b/e/i>: ");
        scanf(" %c", &mode);
        while ((getchar()) != '\n');    //You need this if you wanna use fgets() after scanf() 

        if (mode == 'b'){
                Bubble();
        }
        else if (mode == 'e'){
                Extrem();
        }
	else if (mode == 'i'){
		Insert();
	}
	else
                printf("stupid user detected\n");
}



int main(){
char exit = 'y';

        printf("\033[H\033[J");
        printf("░░░█▀▄░█▀█░▀█▀░█▀█░█▀▄░█▀█░█▀▀░█▀▀░█▀▀░░░\n");
        printf("░░░█░█░█▀█░░█░░█▀█░█▀▄░█▀█░▀▀█░█▀▀░▀▀█░░░\n");
        printf("░░░▀▀░░▀░▀░░▀░░▀░▀░▀▀░░▀░▀░▀▀▀░▀▀▀░▀▀▀░░░\n");
        printf("░░░░░░░░░░░░░█░░░█▀█░█▀▄░▀█░░░░░░░░░░░░░░\n");
        printf("░░░░░░░░░░░░░█░░░█▀█░█▀▄░░█░░by scan-87░░\n");
        printf("░░░░░░░░░░░░░▀▀▀░▀░▀░▀▀░░▀▀▀░░░░░░░░░░░░░\n");


        while (exit != 'n'){
                main_menu();
                printf("\nDo you want to continue? <y/n>: ");
                scanf(" %c", &exit);
        }

        printf("\033[H\033[J");
}

