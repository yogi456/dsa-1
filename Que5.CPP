//WAP to find string is palindrom and not
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>

int main(){
char str[10];
int j,len,flag=0;
cout<<"enter string";
cin>>str;
len=strlen(str);
for(j=0;j<len;j++)
{
if(str[j]!=str[len-j-1])
{
flag=1;
break;
}
}
if(flag)
{
cout<<str<<" is not a palindrome"<<endl;

}
else{
cout<<"Palindrome";

}
getch();
return 0;
}