#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int main(){
clrscr();
int arr[10],num;
cout<<"Enter the array";
for(int j=0;j<10;j++)
{
cin>>arr[j];
}
cout<<"Enter a number you wanna search";
cin>>num;
for(int i=0;i<10;i++)
{
if(arr[i]==num){
cout<<"Number is Founded at"<<i<<"position";
}

}


getch();
return 0;
}