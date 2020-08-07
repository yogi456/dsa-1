#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main(){
clrscr();
int emp[20],count=0;
for(int i=0;i<20;i++){
cin>>emp[i];
if(emp[i]==0)
{
count++;
}
}
cout<<"No. of years in which No emp Joined"<<count;
getch();
return 0;
}