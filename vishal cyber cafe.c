#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// structure members
typedef struct computer
{
    char com_name[10],ram[10],storage[10];
    int id;
    float price;

}C;

// Acer 4 56 21546 34567.67  HP 5 8 5854 5797.6879 HP 3 76 56789 576890.7 lenvo  4 5 7687 4500.00 HP 4 67 12345 6789809.89
void read_com(C *cptr,int n)
{
    int i;
    printf("Enter company_name,ram,storage,id,price\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%s%s%d%f",cptr->com_name,cptr->ram,cptr->storage,&cptr->id,&cptr->price);
        cptr++;
    }
}
void display_com(C *cptr,int n)
{
    int i;
    printf("company_name\tram\tstorage\tid\tprice\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%s\t%d\t%0.2f\n",cptr->com_name,cptr->ram,cptr->storage,cptr->id,cptr->price);
        cptr++;
    }
}
void display_HP(C *cptr,int n)
{
    int i;
    printf("The details of HP company details\n");
    for(i=0;i<n;i++)
    {
        if(strcmp(cptr->com_name,"HP")==0)
        {
           printf("%s\t%s\t%s\t%d\t%0.2f\n",cptr->com_name,cptr->ram,cptr->storage,cptr->id,cptr->price);
        }


        cptr++;
    }

}

int main()
{
    C *cptr;
    int n;
    printf("Enter the number of computers\n");
    scanf("%d",&n);
    cptr=(C*)malloc(n*sizeof(C));
    read_com(cptr,n);
    display_com(cptr,n);
    display_HP(cptr,n);
    free(cptr);
    return 0;
}
