#include<stdio.h>
#include<string.h>
 
enum Eventtype{
    cultural,
    sports,
    technical};

union Score{
    int score;
};

typedef struct event{
    char Eventname[50];
    enum Eventtype type;
    int maxmarks;
    union Score score;
} Event;

typedef struct student{
    int rollno;
    char name[50];
    int age;
    char phone[10]; //int can also be used
    char email[50]; //instead of char int can't be used
    Event event[3];
    int totalmarks;
    float avg;
    char grade;
} student;

void addstudent(student students[]){
    int i,j;
for(i=0;i<NUM_STUDENTS;i++){
    printf("enter roll no: ");
    scanf("%d",&students[i].rollno);
    printf("name: ");
    scanf("%49s", students[i].name);
    printf("Enter age");
    scanf("%d",&students[i].age);
    printf("enter phone no.: ");
    scanf("%9s", students[i].phone); // limit to avoid overflow
    printf("enter email: ");
    scanf("%49s", students[i].email);
for(j=0;j<3;j++){
    printf("Event name");
    scanf("%s", students[i].event[j].Eventname);
    printf("Event type: 0 for cultural, 1 for sports, 2 for technical");
    scanf("%d",&students[i].event[j].type);
    printf("Max marks");
    scanf("%d",&students[i].event[j].maxmarks);
    printf("Scored marks");
    scanf("%d",&students[i].event[j].score.score);


        }
    }
}

void report(student students[]){
        int i,j;
        for(i=0;i<2;i++){
        students[i].totalmarks=0;
            for(j=0;j<3;j++){
                 students[i].totalmarks+=students[i].event[j].score.score;}
                 // student[i].totalmarks=  student[i].totalmarks+student[i].event[j].score.score;
            students[i].avg=(float)students[i].totalmarks/3.0;}
        printf("\n");
        if(students[i].avg >= 45){
            students[i].grade='A';
        }
        else if(students[i].avg >= 35){
            students[i].grade='B';
        }
        else{
            students[i].grade='C';
        }
        printf(" %s \t %d \t %f \t %c \t", students[i].name, students[i].totalmarks, students[i].avg, students[i].grade);
    }
} 

    void sort(student students[]){
        int i,j;
        student temp;
        for(i=0;i<2-1;i++){
            for(j=i+1;j<2-i-1;j++){
                if(students[i].totalmarks<students[j].totalmarks){
                    temp=students[i];
                    students[i]=students[j];
                    students[j]=temp;
                }
            }
        }
    }

    void leaderboard(student students[]){
        int i;
        printf("LEADERBOARD\n");
        printf("Name \t Total Marks \t Average \t Grade \t");
        for(i=0;i<2;i++){
            printf(" %s \t %d \t %f \t %c \t",student[i].name,student[i].totalmarks,student[i].avg,student[i].grade);
        }
    }
    

