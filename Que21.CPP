#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()

{
clrscr();
int arr[3][3],arr1[3][3];


for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cin>>arr[i][j];
}
 }

 for(int j=0;j<3;j++)
 {

 for(int k=0;k<3;k++)
 {
      cout<<arr[k][j];
 }
}
 getch();
 return 0;
}