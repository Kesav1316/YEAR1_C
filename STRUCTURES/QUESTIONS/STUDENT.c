//GET INFO OF STUDENTS AND TEACHERS
//STUDENT - NAME , ROLLNO , MARKS IN 5 SUBJECTS
//TEACHER - NAME , SUBJECT , PHONE NO 


#include <stdio.h>

int main () {


//STUDENT
    struct student {
        char name[100];
        int rno , marks[5];


    };
    struct student s;

 
//TEACHER
 
 
    struct teacher {
        char name[100] , subject[100];
        int pno;
        

    };
    struct teacher t;


//GETTING INPUT FOR STUDENT
    /*int n;
    printf("Enter number of entries for students: ");
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i ++ ) {
        printf("Enter the name of student %d: ",n+1);
        scanf()
    } */

    printf("Enter the name of student: ");
    scanf("%s",s.name);
    printf("Enter the rollno of student: ");
    scanf("%d",&s.rno);
    for (int i = 0 ; i < 5 ; i++) {
        printf("Enter the marks in subject %d\n",i+1);
        scanf("%d",&s.marks[i]);
    }

    for (int j = 0 ; j < 5 ; j++) {
        printf("The marks in subject %d is: %d\n",j+1,s.marks[j]);
    }



//GETTING INPUT FOR TEACHERS

    printf("Enter the name of the teacher: ");
    scanf("%s\n",t.name);
    printf("Enter the subject of the teacher :");
    scanf("%s\n",t.subject);
    printf("Enter the phone no of teacher ");
    scanf("%d",&t.pno); 




}