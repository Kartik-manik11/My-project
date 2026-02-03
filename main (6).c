#include<stdio.h>
#include<conio.h>
//int
void main(){
    float c=32.5;
    float f=(9.0/5.0)*c+32;
    //we can define it by same way.
    /*float c,f;
    printf("enter a no.");
    scanf("%f",&c);
    */
    //float f=((9.0/5.0)*c)+32; 
    //both gives same output;
    //irrespective of the ()
    
    /*
     float f=((9/5)*c)+32; 
     or
     float f=(9/5)*c+32;
     gives an error
     we use 9.0 and 5.0 for that perfect value 
     or
     we can use 1.8 directly in place of 9/5
     */
     
    printf("temperature will be %f in fahrenite",f);
    //return 0;
    getch();
}
    