#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main(){
clrscr();
int i,arr[10],large,small;
for(int j =0;j<10;j++)
{
cout<<"Enter" << j+1<<"element";
cin>>arr[j];
}
large=small=arr[0];

for(i=1;i<10;++i)
{
if(arr[i]>large){
large=arr[i];
}
if(arr[i]<small) {
small=arr[i];
}
}
cout<<"Large element of vector is"<<large<<endl;
cout<<"Small element of array is "<<small<<endl;
getch();
return 0;
}