#include<stdio.h>
#include<conio.h>
//int
void main(){
    int r,h;
    float area,vol;
    r=2;
    area= r*3.14*r;
    printf("radius=%d \n",r);
    printf("area of circle=%f \n",area);
    h=4;
    vol= 3.14*r*r*h;
    printf("height=%d \n",h);
     printf("radius=%d \n",r);
      printf("volume of cylinder=%f \n",vol);
      
      printf("area of radius %d is %f",r,area);
       printf("volume of radius %d & height %d  is %f",r,h,vol);
       //mapping is simultaneously
       //return 0;
       getch();
}
