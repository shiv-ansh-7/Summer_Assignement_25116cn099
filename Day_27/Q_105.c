#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s[100];
    int n = 0, choice, i, search;

    while (1) {
        printf("\n1.Add Student\n2.Display\n3.Search\n4.Exit\n");
        scanf("%d", &choice);
switch(choice) {
                case 1:
     printf("Enter Rollno  Name and Marks: ");
                 scanf("%d %s %f",
                      &s[n].roll,
                      s[n].name,
                      &s[n].marks);
                n++;
                break;

    case 2:
                for(i=0;i<n;i++) {
                    printf("\nRoll: %d", s[i].roll);
                    printf("\nName: %s", s[i].name);
                    printf("\nMarks: %.2f\n", s[i].marks);
                }
                break;

            case 3:
                printf("Enter Roll No: ");
                scanf("%d",&search);

                for(i=0;i<n;i++) {
                    if(s[i].roll==search) {
                        printf("\nFound");
                        printf("\n%s %.2f",
                               s[i].name,
                               s[i].marks);
                    }
                }
                break;

            case 4:
                return 0;
        }
    }
}