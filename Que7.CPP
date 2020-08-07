#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<ctype.h>

int main(){
clrscr();
char string[80];
int count=0;
cin.getline(string,80);
for(int i=0;string[i]!='\0';i++)
{
if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')

{
count=count+1;

}
}
cout<<count;
getch();
return 0;
}