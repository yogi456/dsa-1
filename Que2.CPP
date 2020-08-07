//WAP to read prices of 10 items in an array then display sum of all prices product of all the prices and average of them

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main(){
int item[10],sum=0,avg;
for(int i=0;i<10;i++)
{
cout<<"Enter the price of"<<i+1<< "item"<<endl;
cin>>item[i];
sum+=item[i];


}
cout<<sum;
avg=sum/10;
cout<<avg;
getch();
return 0;

}