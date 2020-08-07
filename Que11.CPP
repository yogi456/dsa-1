#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int main()
{
int arr[3][3];
int arr1[3][3];
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
int flag =0;
for(int m=0;m<4;m++){
for(int n=0;n<4;n++){

if(arr[m][n]!=arr1[m][n])
{
flag =1;
break;

}
}
}
if(flag){
cout<<"Matched";
}
else{
cout<<" not Matched";
}

getch();
return 0;
}

