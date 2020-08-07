#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()

{
clrscr();
int arr[3][3];

for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cin>>arr[i][j];
}
 }

 for(int j=0;j<3;j++)
 {
 int sum=0;
 int sum1=0;
 for(int k=0;k<3;k++)
 {
sum+=arr[j][k];
sum1+=arr[k][j];
 }
  cout<<"Sum of Row"<<sum<<endl;
  cout<<"Sum of COl"<<sum1<<endl;
 }
 getch();
 return 0;
}