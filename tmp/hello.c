#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void show(int a[10][10])//展示数独当前状态(制作九宫格)
{
printf("一一一一一一一一一一一一\n");
 for(int i=1;i<10;i++)
 {printf("|");
 for(int j=1;j<10;j++)
 {if(a[i][j]==0){if(j==3||j==6||j==9)printf(" ");else printf("   ");}
  if(a[i][j]!=0){if(j==3||j==6||j==9)printf("\033[40;31m%d\033[0m",a[i][j]);else printf("\033[40;31m%d  \033[0m",a[i][j]);}
  if(j==3||j==6||j==9)printf("|");
  if(j==9&&(i==3||i==6||i==9))printf("\n|");
  if(j==9&&(i!=3&&i!=6&&i!=9))printf("\n\n");
 }
 if(i==3||i==6)printf("一一一一一一一一一一一一\n");
 }
 printf("一一一一一一一一一一一一");
 };
 int panduan(int a[10][10])//判断数独是否正确
 {int n=1;
  while(n<10)//判断行是否正确
  {for(int i=1;i<10;i++)
     for(int j=i+1;j<10;j++)
     if(a[n][i]==a[n][j])return 0;
   n++;   
  }
  int n1=1;
  while(n<10)//判断列是否正确
  {for(int i=0;i<10;i++)
      for(int j=0;j<10;j++)
      if(a[i][n]==a[j][n])return 0;
   n++;
  }
  int b[9]={1,2,3,4,5,6,7,8,9};//以下均为每一中方格的判断
  for(int i=1;i<=3;i++)
  for(int j=1;j<=3;j++)
  switch(a[i][j])
  {case 1:b[0]=10;break;
   case 2:b[1]=10;break;
   case 3:b[2]=10;break;
   case 4:b[3]=10;break;
   case 5:b[4]=10;break;
   case 6:b[5]=10;break;
   case 7:b[6]=10;break;
   case 8:b[7]=10;break;
   case 9:b[8]=10;break;
  }
  for(int i=0;i<9;i++)
 { if(b[i]!=10)return 0;
  else b[i]=i+1;}
  for(int i=1;i<=3;i++)
    for(int j=4;j<=6;j++)
    switch(a[i][j])
    {case 1:b[0]=10;break;
     case 2:b[1]=10;break;
     case 3:b[2]=10;break;
     case 4:b[3]=10;break;
     case 5:b[4]=10;break;
     case 6:b[5]=10;break;
     case 7:b[6]=10;break;
     case 8:b[7]=10;break;
     case 9:b[8]=10;break;
    }
    for(int i=0;i<9;i++)
    if(b[i]!=10)return 0;
    else b[i]=i+1;
   for(int i=1;i<=3;i++)
    for(int j=7;j<=9;j++)
    switch(a[i][j])
    {case 1:b[0]=10;break;
     case 2:b[1]=10;break;
     case 3:b[2]=10;break;
     case 4:b[3]=10;break;
     case 5:b[4]=10;break;
     case 6:b[5]=10;break;
     case 7:b[6]=10;break;
     case 8:b[7]=10;break;
     case 9:b[8]=10;break;
    }
    for(int i=0;i<9;i++)
   { if(b[i]!=10)return 0;
    else b[i]=i+1;}
    for(int i=4;i<=6;i++)
    for(int j=1;j<=3;j++)
    switch(a[i][j])
    {case 1:b[0]=10;break;
     case 2:b[1]=10;break;
     case 3:b[2]=10;break;
     case 4:b[3]=10;break;
     case 5:b[4]=10;break;
     case 6:b[5]=10;break;
     case 7:b[6]=10;break;
     case 8:b[7]=10;break;
     case 9:b[8]=10;break;
    }
    for(int i=0;i<9;i++)
   { if(b[i]!=10)return 0;
    else b[i]=i+1;}
   for(int i=4;i<=6;i++)
    for(int j=4;j<=6;j++)
    switch(a[i][j])
    {case 1:b[0]=10;break;
     case 2:b[1]=10;break;
     case 3:b[2]=10;break;
     case 4:b[3]=10;break;
     case 5:b[4]=10;break;
     case 6:b[5]=10;break;
     case 7:b[6]=10;break;
     case 8:b[7]=10;break;
     case 9:b[8]=10;break;
    }
    for(int i=0;i<9;i++)
   { if(b[i]!=10)return 0;
    else b[i]=i+1;}
    for(int i=4;i<=6;i++)
    for(int j=7;j<=9;j++)
    switch(a[i][j])
    {case 1:b[0]=10;break;
     case 2:b[1]=10;break;
     case 3:b[2]=10;break;
     case 4:b[3]=10;break;
     case 5:b[4]=10;break;
     case 6:b[5]=10;break;
     case 7:b[6]=10;break;
     case 8:b[7]=10;break;
     case 9:b[8]=10;break;
    }
    for(int i=0;i<9;i++)
   { if(b[i]!=10)return 0;
    else b[i]=i+1;}
     for(int i=7;i<=9;i++)
    for(int j=1;j<=3;j++)
    switch(a[i][j])
    {case 1:b[0]=10;break;
     case 2:b[1]=10;break;
     case 3:b[2]=10;break;
     case 4:b[3]=10;break;
     case 5:b[4]=10;break;
     case 6:b[5]=10;break;
     case 7:b[6]=10;break;
     case 8:b[7]=10;break;
     case 9:b[8]=10;break;
    }
    for(int i=0;i<9;i++)
   { if(b[i]!=10)return 0;
    else b[i]=i+1;}
    for(int i=7;i<=9;i++)
    for(int j=4;j<=6;j++)
    switch(a[i][j])
    {case 1:b[0]=10;break;
     case 2:b[1]=10;break;
     case 3:b[2]=10;break;
     case 4:b[3]=10;break;
     case 5:b[4]=10;break;
     case 6:b[5]=10;break;
     case 7:b[6]=10;break;
     case 8:b[7]=10;break;
     case 9:b[8]=10;break;
    }
    for(int i=0;i<9;i++)
   { if(b[i]!=10)return 0;
    else b[i]=i+1;}
    for(int i=7;i<=9;i++)
    for(int j=7;j<=9;j++)
    switch(a[i][j])
    {case 1:b[0]=10;break;
     case 2:b[1]=10;break;
     case 3:b[2]=10;break;
     case 4:b[3]=10;break;
     case 5:b[4]=10;break;
     case 6:b[5]=10;break;
     case 7:b[6]=10;break;
     case 8:b[7]=10;break;
     case 9:b[8]=10;break;
    }
    for(int i=0;i<9;i++)
   { if(b[i]!=10)return 0;
    else b[i]=i+1;}
    return 1;
 }
 void tishi(int a[10][10],int b[10][10])
 {int n=0,m=0,num=0;
  for(int i=1;i<10;i++)
   for(int j=1;j<10;j++)
   if(a[i][j]==0){n=i;m=j;num=b[i][j];}
   printf("横坐标：%d  纵坐标：%d  填入数字：%d\n",n,m,num);
  }
 int begin(int a[10][10],int b[10][10])
 {srand(time(NULL));
  for(int i=1;i<10;i++)
  for(int j=1;j<10;j++)
  a[i][j]=b[i][j];int nan,now=0,hang=0,lie=0,nan2;
  printf("请输入难度，简单难度填写1，普通难度填写2，困难难度填写3。\n");scanf("%d",&nan);
  if(nan==1)nan2=30;
  if(nan==2)nan2=45;
  if(nan==3)nan2=60;
  while(now<=nan2)
  {hang=rand()%9+1;lie=rand()%9+1;
   if(a[hang][lie]!=0)
   {a[hang][lie]=0;now++;}
  }
  show(a);printf("\n");char p;int h,z,n,m=0;
  while(1)
  {
   printf("若要填写请输入t，若要删除请输入d，需要下一步提示请输入q，若要查看答案请输入a，若要更换题目请输入c，若已填写完成请输入j\n");scanf("%s",&p);
   
   if(p=='t'){printf("\n");printf("请输入要填写的横坐标，纵坐标以及要填写进去的数字\n");scanf("%d%d%d",&h,&z,&n);a[h][z]=n;show(a);printf("\n");}
   if(p=='d'){printf("\n");printf("请输入要删除的数所在的横坐标与纵坐标\n");scanf("%d%d",&h,&z);a[h][z]=0;show(a);printf("\n");}
   if(p=='a'){show(b);printf("\n");}
   if(p=='q'){tishi(a,b);}
   if(p=='j'){m=panduan(a);if(m==1)printf("\033[40;32maccept\033[0m\n");if(m==0)printf("\033[40;31mwrong answer\033[0m\n");return 0;}
   if(p=='c'){return 1;}
   }

 }
 int main()
 {int a[10][10]={0},
     a1[10][10]={{0},{0,7,6,1,9,3,4,8,2,5},{0,3,5,4,6,2,8,1,9,7},{0,9,2,8,1,5,7,6,3,4},{0,2,1,9,5,4,6,3,7,8},{0,4,8,3,2,7,9,5,1,6},{0,5,7,6,3,8,1,9,4,2},{0,1,9,5,7,6,2,4,8,3},{0,8,3,2,4,9,5,7,6,1},{0,6,4,7,8,1,3,2,5,9}},
      b[10][10]={0},
     b1[10][10]={{0},{0,5,7,4,3,9,1,6,2,8},{0,3,8,6,4,5,2,9,7,1},{0,1,9,2,6,7,8,5,3,4},{0,4,2,1,9,8,3,7,6,5},{0,9,5,3,7,4,6,1,8,2},{0,8,6,7,2,1,5,3,4,9},{0,6,3,9,5,2,4,8,1,7},{0,2,1,5,8,3,7,4,9,6},{0,7,4,8,1,6,9,2,5,3}},
      c[10][10]={0},
     c1[10][10]={{0},{0,4,9,5,7,6,2,1,8,3},{0,2,8,3,5,4,1,6,7,9},{0,1,7,6,3,9,8,2,4,5},{0,7,2,4,1,5,9,3,6,8},{0,9,5,1,6,8,3,7,2,4},{0,3,6,8,2,7,4,5,9,1},{0,5,1,9,4,2,7,8,3,6},{0,8,3,7,9,1,6,4,5,2},{0,6,4,2,8,3,5,9,1,7}},
      d[10][10]={0},
     d1[10][10]={{0},{0,6,9,2,1,3,8,7,5,4},{0,8,7,5,6,4,2,3,1,9},{0,1,3,4,5,9,7,2,8,6},{0,7,5,8,4,2,9,1,6,3},{0,2,1,3,7,6,5,4,9,8},{0,4,6,9,3,8,1,5,7,2},{0,9,4,7,2,5,6,8,3,1},{0,5,2,6,8,1,3,9,4,7},{0,3,8,1,9,7,4,6,2,5}},
      e[10][10]={0},
     e1[10][10]={{0},{0,9,4,5,8,7,2,3,6,1},{0,1,7,6,5,9,3,2,8,4},{0,8,2,3,6,1,4,5,7,9},{0,5,3,2,1,4,8,6,9,7},{0,6,9,8,7,3,5,1,4,2},{0,7,1,4,9,2,6,8,5,3},{0,3,5,9,2,6,7,4,1,8},{0,2,8,7,4,5,1,9,3,6},{0,4,6,1,3,8,9,7,2,5}},
      f[10][10]={0},
     f1[10][10]={{0},{0,1,4,9,8,3,6,7,5,2},{0,5,7,6,2,4,1,9,3,8},{0,2,3,8,5,7,9,1,6,4},{0,7,2,4,3,6,8,5,9,1},{0,6,8,3,9,1,5,4,2,7},{0,9,5,1,4,2,7,3,8,6},{0,3,6,2,7,9,4,8,1,5},{0,4,1,5,6,8,3,2,7,9},{0,8,9,7,1,5,2,6,4,3}},
      g[10][10]={0},
     g1[10][10]={{0},{0,8,3,9,6,5,7,2,1,4},{0,6,7,2,9,4,1,5,8,3},{0,1,5,4,8,3,2,9,6,7},{0,5,4,1,2,8,3,7,9,6},{0,2,8,7,4,9,6,3,5,1},{0,9,6,3,7,1,5,4,2,8},{0,7,1,8,3,2,9,6,4,5},{0,3,2,5,1,6,4,8,7,9},{0,4,9,6,5,7,8,1,3,2}};
 int n=0,m=0;
 while(1)
 {time_t t1,t2;
 printf("请输入要选择的题集(1~7)，退出游戏请输入8\n");scanf("%d",&n);t1=time(NULL);
 switch(n)
 {
 case 1:begin(a,a1);break;
 case 2:begin(b,b1);break;
 case 3:begin(c,c1);break;
 case 4:begin(d,d1);break;
 case 5:begin(e,e1);break;
 case 6:begin(f,f1);break;
 case 7:begin(g,g1);break;
 }
 if(n==1||n==2||n==3||n==4||n==5){t2=time(NULL);printf("\n\n\n\033[42;31m您填写此题目花了%ld秒\033[0m\n",t2-t1);}
 if(n==8)break;
 }
 return 0;
 }
