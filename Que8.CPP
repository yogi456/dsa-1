#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<ctype.h>

int main(){
clrscr();
char string[80],str[80],cha=0;
cin.getline(string,80);
for(int i=0;string[i]!='\0';i++);
for(int j=0;j<i;j++)
{
if(string[j]!=' ')
{
str[cha]=string[j];
cha++;
}
else
{
while(cha>0)
{
cout<<str[--cha];

}
cout<<string[j];
}

}

getch();
return 0;
}