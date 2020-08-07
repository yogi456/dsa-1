#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int main()
{
clrscr();
int arr[3][3];
int arr1[3][3];
int add[3][3];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
{

cin>>arr[i][j];
}
}
for(int k=0;k<3;k++){

for(int l=0;l<3;l++)
{

cin>>arr1[k][l];
}
}

for(int m=0;m<3;m++){
for(int n=0;n<3;n++){
add[m][n] = arr[m][n]+arr1[m][n];
cout<<add[m][n]<<endl;
}
}


getch();
return 0;
}

