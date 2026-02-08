#include<stdio.h>
void main(){
    int i=0,j=0,a=0 ,b=0,c=0;

    j= i++ + ++i;
    printf("%d i1\n",i);

    a= i-- + --i;
    printf("%d i2\n",i);

    b= i++ - ++i;
    printf("%d i3\n",i);

    c= i-- - --i;
    printf("%d i4\n",i);

    printf("%d j\n",j);
    printf("%d a\n",a);
    printf("%d b\n",b);
    printf("%d c\n",c);
}
