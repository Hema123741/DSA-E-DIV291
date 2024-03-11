#include<stdio.h>
#include<string.h>
#include<stdlib.h>3

typedef struct student_t_distribution
{
    char name[10],mobile_no[20],place[10],course[10];
    int marks;
    float percentage;

}S;
// akku 235 sagar BE 624  appu 4565 shanwad CSE 524   nagu 234 hubli CSE 574


void read_student(S *sptr,int n)
{
    int i;
    printf("Enter name,mobile no,place,course,marks\n");
    for(i=0;i<n;i++)
    {
      scanf("%s%s%s%s%d",sptr->name,sptr->mobile_no,sptr->place,sptr->course,&sptr->marks);
      sptr++;
    }
}
void display_student(S *sptr,int n)
{
    int i;
    printf("name\tmobile no\tplace\tcourse\tmarks\n");
    for(i=0;i<n;i++)
    {
      printf("%s\t%s\t%s\t%s\t%d\t%0.2f\n",sptr->name,sptr->mobile_no,sptr->place,sptr->course,sptr->marks,sptr->percentage);
      sptr++;
    }
}
void search_student(S *sptr,int n,char subject[20])
{
    int i,status=0,count=0;
    for(i=0;i<n;i++)
    {
        if(strcmp(sptr->course,subject)==0)
        {
           count++;
            status=1;

        }
        sptr++;
    }
    if(status==1)
    {
        printf("%d  students registered for %s course\n",count,subject);
    }
    else
        printf("no students registered for %s subject\n",subject);

}
void cal_percent(S *sptr,int n)
{
    int i;
    printf("The students who scored above 90\n");
    for(i=0;i<n;i++)
    {
        sptr->percentage=(sptr->marks/625.00)*100;
        if(sptr->percentage>90)
    {

      printf("%s\t%s\t%s\t%s\t%d\t%0.2f\n",sptr->name,sptr->mobile_no,sptr->place,sptr->course,sptr->marks,sptr->percentage);
     }

        sptr++;
    }

}
int main()
{
    S *sptr;
    int n;
    char subject[20];
    printf("Enter the number of students\n");
    scanf("%d",&n);
    sptr=(S*)malloc(n*sizeof(S));
    read_student(sptr,n);
    cal_percent(sptr,n);
    display_student(sptr,n);
    printf("Enter the course\n");
    scanf("%s",subject);
    search_student(sptr,n,subject);
    free(sptr);
    return 0;
}
