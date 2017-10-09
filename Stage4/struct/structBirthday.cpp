/*
   Description
   在一个有100人的大班级中，存在多个生日相同的概率非常大。现给出每个学生的学号，出生月日。请列出所有生日相同的同学。
   Input
   第一行为整数n，表示有n个学生，n<100。
   此后每行包含一个字符串和两个整数，分别表示学生的学号（字符串长度小于10）和出生月（1<=m<=12）日（1<=d<=31）。
   学号、月、日之间用一个空格分隔。
   Output
   对每组生日相同的学生，输出一行。
   其中前两个数字表示月和日，后面跟着所有在当天出生的学生的学号，数字、学号之间都用一个空格分隔。
   对所有的输出，要求按日期从前到后的顺序输出。
   对生日相同的学号，按输入的顺序输出。
*/
//数组（一维、二维）
//结构体

#include <iostream>
using namespace std;
struct student
{
    char ID[10];
    int month;
    int day;
} stu[100];
int main()
{
    int i,j,k,n,flag,count[100]={0};
    cout<<"How many students?";
    cin>>n;
    for(int i=0;i<n;i++)
	cin>>stu[i].ID>>stu[i].month>>stu[i].day;
    for(int m=1;m<=12;m++)
	for(int d=1;d<=31;d++)
	{
	    flag=0;j=0;
	    for(int i=0;i<n;i++)
		if(stu[i].month==m&&stu[i].day==d)
		{
		    count[++j]=i;flag++;
		}//count[j]用于记录生日相同同学的学号
	    if(flag>1)
	    {
		cout<<m<<" "<<d<<" "<<endl;
		for(k=1;k<=j;k++)
		    cout<<stu[count[k]].ID<<" "<<endl;
	    }
	}
    return 0;
}
