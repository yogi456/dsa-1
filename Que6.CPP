//WAP to replace every space with a hyphen
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<ctype.h>

int main(){
clrscr();
char string[80];
cin.getline(string,80);
string[0]=toupper(string[0]);
for(int i=0;string[i]!='\0';i++)
{
if(string[i]==' '&& string[i]!='\0')
{
string[i]='-';
}

cout<<string[i];
}

getch();
return 0;
}