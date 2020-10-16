#include <stdio.h>
#include <stdlib.h>

FILE* fp;
FILE* fp1;
struct student
{
       int rollno;
       char name[30];
       int m[5];
       float avg;
       char grade,result;
       int total;
}s[40];
struct student *ss=s;
int i,j;
int teacher();
int studentI();
int main()
{
int choice1;
int choice2;
{
do
{
    printf("Enter 1 for teacher interface and enter 2 for student interface:\n");
    scanf("%d",&choice1);

switch(choice1)
{
case 1:
    teacher();
    break;
case 2:
    studentI();
    break;
}
printf("Enter 1 to continue and 2 to exit:");
scanf("%d",&choice2);

}while(choice2==1);
}
}
int teacher()
{ printf("enter the no. of students: ");
  int n;int *p=&n;
  scanf("%d",&n);

  fp=fopen("data","wb");
  fp1=fopen("name","wb");
  fwrite(p,sizeof(int),1,fp);
  for(i=0;i<n;++i)
  {
   printf("enter the marks of student %d :\n",i+1);
   for(j=0;j<5;++j)
   {
    printf("#");
    scanf("%d",&(ss+i)->m[j]);
   }
   fwrite((ss+i)->m,sizeof(int),5,fp);
  }
  for(i=0;i<n;i++)
  {
      printf("Enter the name of student %d: \n",i+1);
      printf("#");
      scanf("%s",&(ss+i)->name);
       fwrite((ss+i)->name,sizeof((ss+i)->name),1,fp1);
        fwrite((ss+i)->m,sizeof(int),1,fp);

  }
      fclose(fp);
      fclose(fp1);
  }

int studentI( )
{
 fp=fopen("data","rb");
 fp1=fopen("name","rb");
 int x;int *p=&x;
 fread(p,sizeof(int),1,fp);
 for(i=0;i<x;++i)
  {fread(((ss+i)->m),sizeof(int),5,fp);
   fread(((ss+i)->name),sizeof((ss+i)->name),1,fp1);
   printf("#");
  }

       int num,roll=1,i;
       int l[5]={0,0,0,0,0};
       int z[5]={0,0,0,0,0};
       int n[5]={0,0,0,0,0};
       int o[5]={0,0,0,0,0};
       int y[5]={0,0,0,0,0};


for(int a=0;a<x;++a)
{


if(s[a].m[0]>=0&&s[a].m[0]<=10)
l[0]+=1;
if(s[a].m[0]>10&&s[a].m[0]<=20)
l[1]+=1;
if(s[a].m[0]>20&&s[a].m[0]<=30)
l[2]+=1;
if(s[a].m[0]>30&&s[a].m[0]<=40)
l[3]+=1;
if(s[a].m[0]>40&&s[a].m[0]<=50)
l[4]+=1;

if(s[a].m[1]>=0&&s[a].m[1]<=10)
z[0]+=1;
if(s[a].m[1]>10&&s[a].m[1]<=20)
z[1]+=1;
if(s[a].m[1]>20&&s[a].m[1]<=30)
z[2]+=1;
if(s[a].m[1]>30&&s[a].m[1]<=40)
z[3]+=1;
if(s[a].m[1]>40&&s[a].m[1]<=50)
z[4]+=1;

if(s[a].m[2]>=0&&s[a].m[2]<=10)
n[0]+=1;
if(s[a].m[2]>10&&s[a].m[2]<=20)
n[1]+=1;
if(s[a].m[2]>20&&s[a].m[2]<=30)
n[2]+=1;
if(s[a].m[2]>30&&s[a].m[2]<=40)
n[3]+=1;
if(s[a].m[2]>40&&s[a].m[2]<=50)
n[4]+=1;


if(s[a].m[3]>=0&&s[a].m[3]<=10)
o[0]+=1;
if(s[a].m[3]>10&&s[a].m[3]<=20)
o[1]+=1;
if(s[a].m[3]>20&&s[a].m[3]<=30)
o[2]+=1;
if(s[a].m[3]>30&&s[a].m[3]<=40)
o[3]+=1;
if(s[a].m[3]>40&&s[a].m[3]<=50)
o[4]+=1;


if(s[a].m[4]>=0&&s[a].m[4]<=10)
y[0]+=1;
if(s[a].m[4]>10&&s[a].m[4]<=20)
y[1]+=1;
if(s[a].m[4]>20&&s[a].m[4]<=30)
y[2]+=1;
if(s[a].m[4]>30&&s[a].m[4]<=40)
y[3]+=1;
if(s[a].m[4]>40&&s[a].m[4]<=50)
y[4]+=1;
}
   printf("enter your roll no.");
   int r;
   scanf("%d",&r);
   r=r-1;

            if(s[r].m[0]>=10 && s[r].m[1]>=10 && s[r].m[2]>=10 &&s[r].m[3]>=10 && s[r].m[4]>=10)
              {
                 s[r].result='P';
              }
            else
             {
                 s[r].result = 'F';
             }
                 s[r].total = s[r].m[0]+s[r].m[1]+s[r].m[2]+s[r].m[3]+s[r].m[4];
                 printf("The Total is : %d",s[r].total);
                 s[r].avg=s[r].total/5;
                 if(s[r].avg>=40)
                  {
                      if(s[r].result == 'P')
                         {
                              s[r].grade = 'S';
                         }
                        else
                        {
                               s[r].grade = 'W';
                        }
                  }
                 else if(s[r].avg>=30)
                         {
                              if(s[r].result == 'P')
                                {
                                       s[r].grade = 'A';
                                }
                               else
                                {
                                       s[r].grade = 'W';
                                }
                         }
                 else if(s[r].avg>=20)
                        {
                             if(s[r].result == 'P')
                               {
                                     s[r].grade = 'B';
                               }
                             else
                              {
                                     s[r].grade = 'W';
                              }
                        }
                 else if(s[r].avg>=10)
                        {
                             if(s[r].result == 'P')
                               {
                                     s[r].grade = 'C';
                               }
                             else
                              {
                                     s[r].grade = 'W';
                              }
                        }



                       printf("\n####################################################################################################");
                       printf("\n                      STUDENT CBT1 REPORT(CHEM CYCLE)");
                       printf("\n####################################################################################################");
                       printf("\nROLLNO \tNAME\tMATH\tCOMP\tCHEM\tMECH\tELEC\tTOTAL\tRESULT\tAVERAGE\tGRADE");

                           {
                              printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%c\t%0.1f\t%c",r+1,s[r].name,s[r].m[0],s[r].m[1],s[r].m[2],s[r].m[3],s[r].m[4],s[r].total,s[r].result,s[r].avg,s[r].grade);
                              printf("\n####################################################################################################");

                           }

                              printf("\nMaths marks are:\n");
                              printf("\n0-10\t10-20\t20-30\t30-40\t40-50\n");
                              printf("%d\t%d\t%d\t%d\t%d\n",l[0],l[1],l[2],l[3],l[4]);

                              printf("Comp marks are:\n");
                              printf("\n0-10\t10-20\t20-30\t30-40\t40-50\n");
                              printf("%d\t%d\t%d\t%d\t%d\n",z[0],z[1],z[2],z[3],z[4]);

                              printf("Chem marks are:\n");
                              printf("\n0-10\t10-20\t20-30\t30-40\t40-50\n");
                              printf("%d\t%d\t%d\t%d\t%d\n",n[0],n[1],n[2],n[3],n[4]);

                              printf("Mech marks are:\n");
                              printf("\n0-10\t10-20\t20-30\t30-40\t40-50\n");
                              printf("%d\t%d\t%d\t%d\t%d\n",o[0],o[1],o[2],o[3],o[4]);

                              printf("Elec marks are:\n");
                              printf("\n0-10\t10-20\t20-30\t30-40\t40-50\n");
                              printf("%d\t%d\t%d\t%d\t%d\n",y[0],y[1],y[2],y[3],y[4]);
                              fclose(fp);
}
