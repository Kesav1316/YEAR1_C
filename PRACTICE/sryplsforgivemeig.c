# include <stdio.h>

struct Students{

    char name[256];
    int rno;
    int marks[5];

} student[];


struct Teachers
{
    char name[256];
    int empno;
    char subject[256];
} teacher[];

int main() {

    int noOfStudents;

    printf("Enter the number of students: ");
    scanf("%d", &noOfStudents);

    for(int i = 0; i < noOfStudents; i++){

        printf("\nEnter the details of student %d", i+1);


        printf("\nName:");
        scanf("%s", student[i].name);

        printf("\nrno: ");
        scanf("%d", &student[i].rno);

        for (int j = 0; j < 5; j++){

            printf("\nEnter the mark of subject %d", j+1);
            scanf("%d", student[i].rno[j]);
        }
    }
}
