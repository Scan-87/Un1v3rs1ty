//#include <conio.h>
#include <locale.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

 
using namespace std;
 
void Encode()
{
    setlocale(LC_ALL, "rus");
    cout<<"\t\t\tПростая Перестановка"<<endl;
    
    char s[50]; 
    char massiv[100][100]; 
    int b,c;
    int count = 0;
 
    cout<<"\nИсходное слово: ";   
    scanf(" %s", s);
    //gets(s);
    int amount = strlen(s);
    cout<<"\n\t\t\tКоличество символов: "<<amount<<endl;
    cout<<"\n\t\t\t"<<"  Ввести ключ (M x N) "<<endl<<"\n";
    cout<<"Ввести кол-во строк: ";    
    cin >> b;
    cout<<"Ввести кол-во столбцов: ";
    cin >> c;
 
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<c; j++)
        {
            massiv[i][j]=s[count];
            count++;
        }
    }
 
    cout<<"Зашифрованное слово: ";
    for(int j=0; j<c; j++)
    {
        for(int i=0; i<b; i++)
        {
                cout << massiv[i][j];
        }
    }
    cout << endl;
    //getch();
}



 
void Decode()
{
    setlocale(LC_ALL, "rus");
    cout<<"\t\t\tПростая Перестановка"<<endl;
 
 
    cout<<"\t\t\tДешифрование";
    int n,m;
    char d[50];
    char massiv[100][100];
    int count = 0;
 
    cout<<"\nИсходное слово: "; 
    scanf(" %s", d);
    //gets(d);
    
    int amount = strlen(d);
    cout<<"\n\t\t\tКоличество символов: "<<amount<<endl;
    cout<<"\n\t\t\t"<<"  Ввести ключ (M x N) "<<endl<<"\n";
    cout<<"Ввести кол-во строк: ";    
    cin >> m;
    cout<<"Ввести кол-во столбцов: ";
    cin >> n;
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            massiv[i][j]=d[count];
            count++;
        }
    }
 
    cout<<"Дешифрованное слово: ";
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
                cout << massiv[i][j];
        }
    }
    
 
    //getch();
}



int main(){
    Encode();
    Decode();
}
