#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int main(){
clrscr();
long int emp[10],count=0;
for(int i=0;i<10;i++)

{
cout<<"Enter the salary of"<<i+1<<"Employe" <<endl;
cin>>emp[i];
if(emp[i]>100000)
{
count++;

}
cout<<"Number of Employees "<<count;

}



getch();
return 0;

}