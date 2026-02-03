#include<stdio.h>
#include<conio.h>
//int
void main(){
    int p;
    printf("enter principal amount");
    scanf("%d",&p);
    int y;
    printf("enter no. of years");
    scanf("%d",&y);
    float r;
    printf("rate of interest");
    scanf("%f",&r);
    float si=(p*r*y)/100;
    printf("simple interest will be %f",si);
    getch();
    
}