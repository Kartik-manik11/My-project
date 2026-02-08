#include<stdio.h>
int main(){
    char Feb;
    int days;
    printf("if this yr is a leap yr,enter 1.if not enter any integer:");
    scanf("%c",&Feb);
    //if test condition(Feb=='1') is true,then days=29
    //if test condition(Feb=='1') is false,then days=28
    days=(Feb=='1')?29:28;
    printf("days in february is %d",days);
    return 0;
}