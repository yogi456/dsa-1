#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>

int main()
{
clrscr();
int arr[3][3];
int arr1[3][3];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
{

cin>>arr[i][j];
}
}

for(int x=0;x<3;x++)
{
for(int y=0;y<3;y++)
{
if(x==y){
//cout<<arr[x][y];
cout<< arr[x][y]*arr[x][y]<<"\n";

}
}
}
for(int p=0;p<3;p++)
{
for(int q=0;q<3;q++)
{
if(p+q==2)
{
cout<<"second" <<arr[p][q]*arr[p][q]<<"\n";
}
}
}


getch();
return 0;
}