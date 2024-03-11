#include<stdio.h>
// function prototype
float travel_package(char yatra,char package);
// main function
int main()
{
   char yatra,package;
   float charge;
   printf("Enter yatra and package\n");
   scanf(" %c %c",&yatra,&package);
   if(yatra=='K'||yatra=='M'||yatra=='V'||yatra=='G')
   {
      if(package=='P'||package=='C'||package=='B')
      {
        charge=travel_package(yatra,package);
        printf("charge is %0.2f\n",charge);
      }
      else
        printf("Invalid input for packages\n");
   }
      else
        printf("Invalid input for yatra\n");
      return 0;
   }
   //function definition
float travel_package(char yatra,char package)
{
   float charge;
   switch(yatra)
   {
     case'K':switch(package)
             {
               case'P':charge=1000;
                       break;
               case'C':charge=8000;
                       break;
               case'B':charge=5000;
                       break;
             }
             break;
    case'M':switch(package)
             {
               case'P':charge=20000;
                       break;
               case'C':charge=15000;
                       break;
               case'B':charge=10000;
                       break;
             }
             break;
    case'V':switch(package)
            {
               case'P':charge=20000;
                       break;
               case'C':charge=15000;
                       break;
               case'B':charge=10000;
                       break;
             }
             break;
    case'G':switch(package)
            {
               case'P':charge=25000;
                       break;
               case'C':charge=10000;
                       break;
               case'B':charge=7000;
                       break;
            }
            break;
    }

    return charge;
}
