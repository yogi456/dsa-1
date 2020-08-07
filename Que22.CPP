#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<ctype.h>

int main(){
clrscr();
char string1[80],string2[80],con[80];
cout<<"Enter first string";
cin.getline(string1,80);
cout<<"Enter Second String";
cin.getline(string2,80);

for(int i=0;string1[i]!='\0';i++)
{
con[i]=string1[i];
}
for(int j=0;string2[j]!='\0';j++)
{
con[j+i]=string2[j];
}
con[i+j]='\0';
cout<<con<<endl;
getch();
return 0;
}