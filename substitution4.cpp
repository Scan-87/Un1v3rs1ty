#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{

	printf("\033[H\033[J");
	printf("░░░▀█▀░█▀█░█▀▀░█▀█░█▀▀░█▀▀░█▀▀░▀█░░▄▀▄░▀█░░░░\n");
        printf("░░░░█░░█░█░█▀▀░█░█░▀▀█░█▀▀░█░░░░█░░█░█░░█░░░░\n");
        printf("░░░▀▀▀░▀░▀░▀░░░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░░▀░░▀▀▀░░░\n");
        printf("░░░░░░░░░░░░░░░█░░░█▀█░█▀▄░█░█░░░░░░░░░░░░░░░\n");
        printf("░░░░░░░░░░░░░░░█░░░█▀█░█▀▄░░▀█░░░by scan-87░░\n");
        printf("░░░░░░░░░░░░░░░▀▀▀░▀░▀░▀▀░░░░▀░░░░░░░░░░░░░░░\n");

	char b, buff;
	int st, buffer, j;
	int i = 0;
	int counter = 0;
	int size = 256;
	char* str = new char[size];
	cout << "Let's encrypt your message!\n";
	cout << "Please note, it should end with '.'\n>>> ";
	cin.getline(str, size);
	while (str[i] != '.'){
		if (str[i] == ' ')
			counter++;
		i++;
	}
	buffer = i;
	char viz[26][26];
	for (int i = 0; i < 26; i++){
		for (int j = 0; j < 26; j++){
			int t = rand() % 26;
			viz[i][j] = 'a';
			viz[i][j] = viz[i][j] + t;
		}
	}
	i = 0;
	for (int j = 0; j < buffer; j++){
		if ((str[i] != ',') && (str[i] != ' ') && (str[i] != ':') && (str[i] != ';')){
			buff = str[j];
			str[j] = viz[i][j];
			viz[i][j] = buff;
			i++;
		}
	}
	cout << "\nNow your encrypted message looks like this:\n";
	for (int j = 0; j < buffer; j++)
	cout << str[j];
	i = 0;
	for (int j = 0; j < buffer; j++){
		if ((str[i] != ',') && (str[i] != ' ') && (str[i] != ':') && (str[i] != ';')){
			buff = str[j];
			str[j] = viz[i][j];
			viz[i][j] = buff;
			i++;
		}
	}
	cout << "\n\nAnd here is decrypted message!" << endl;
	for (int j = 0; j < buffer; j++)
	cout << str[j];
	cout << "\n\nLooks familiar, right? =)\n";
	return 0;
}
