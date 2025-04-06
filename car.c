#include <stdio.h>
int main(){
int car_var=7;
//  this is a cng car 
switch(car_var)
{
case 1:
    printf("this is a petrol  fuel car\n");
     printf("fiil  up  with petrol  fuel\n ");
    break;
case 2:
    printf("this is a diesel fuel car\n");
     printf("fiil  up  with deasel  fuel\n ");
    break;
case  3:
    printf("this is a electric fuel car\n");
     printf("fiil  up  with charge \n ");
    break;
case 4:
    printf("this is a cng  fuel car\n");
     printf("fiil  up  with cng   fuel \n");

    break;
case 5:
printf("this is a lpg  fuel car\n");
     printf("fiil  up  with lpg  fuel\n ");
     break;
    

default:
 printf("this is a hydro  fuel  car\n");
 printf("fiil  up  with hydrogen  fuel\n ");
    break;
}




   return 0;

}