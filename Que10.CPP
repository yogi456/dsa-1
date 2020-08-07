#include<iostream.h>
#include<conio.h>
int main()

{
clrscr();
float marks[4][3],sum,avg;
char grade[4];


for(int i=0;i<4;i++)
{
sum=0,avg=0;
cout<<"Enter 3 scores of student" <<i+1<<": ";
for(int j=0;j<3;j++)
{

cin>>marks[i][j];
sum+=marks[i][j];
}
avg =( sum/3);
if(avg<45.0 ){
grade[i]='D';
}
else if(avg<65.0){
grade[i] = 'C';
}
else if(avg<75.0){
grade[i] = 'B';
}
else{
grade[i] = 'A';
}
}
//cout<<"Student"<<i<<"\t"<<"Total Marks = "<<"\t"<<sum <<"Grade ="<<"\t" <<grade[i];

for(int k=0;k<4;k++)
{
cout<<"Student"<<k+1<<"\t"<<"Total Marks = "<<"\t"<<marks[k][0]+marks[k][1]+marks[k][2]
 <<"Grade "<<grade[k]<<"\n";
}
getch();

return 0;
}