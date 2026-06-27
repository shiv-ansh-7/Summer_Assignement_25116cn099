#include <stdio.h>
#include <string.h>
#define MAX_MARKSHEETS 100
struct Marksheet {
    int roll_no;
    char name[50];
    int math;
      int physics;
    int chemistry;
        int english;
};struct Marksheet marksheets[MAX_MARKSHEETS];
int marksheet_count = 0;
const char* calculate_grade(double percentage) {
    if (percentage >= 90) return "A+";
    if (percentage >= 80) return "A-";
    if (percentage >= 70) return "B";
    if (percentage >= 60) return "C";
    if (percentage >= 40) return "D";
    return "Fail";
}void add_marksheet(int roll_no, char name[], int m, int p, int c, int e) {
    if (marksheet_count >= MAX_MARKSHEETS) return;
marksheets[marksheet_count].roll_no = roll_no;
    strcpy(marksheets[marksheet_count].name, name);
        marksheets[marksheet_count].math = m;
    marksheets[marksheet_count].physics = p;
    marksheets[marksheet_count].chemistry = c;
               marksheets[marksheet_count].english = e;
    marksheet_count++;
}void print_marksheet(int roll_no) {
    for (int i = 0; i < marksheet_count; i++) {
        if (marksheets[i].roll_no == roll_no) {
            int total = marksheets[i].math + marksheets[i].physics + marksheets[i].chemistry + marksheets[i].english;
            double percentage = (total / 400.0) * 100;
            const char* grade = calculate_grade(percentage);

            printf("\n#  YOUR REPORT CARD #\n");
            printf("Roll No: %d | Name: %s\n", marksheets[i].roll_no, marksheets[i].name);
            printf("-----\n");
            printf("%-20s: %d/100\n", "Mathematics", marksheets[i].math);
            printf("%-20s: %d/100\n", "Physics", marksheets[i].physics);
            printf("%-20s: %d/100\n", "Chemistry", marksheets[i].chemistry);
            printf("%-20s: %d/100\n", "English", marksheets[i].english);
            printf("-------\n");
            printf("Total Obtained : %d / 400\n", total);
            printf("Percentage     : %.2f%%\n", percentage);
            printf("Final Grade    : %s\n", grade);
            printf("######\n");
            return;
        }
    } printf("Marksheet for Roll No %d not found.\n", roll_no);
}int main() {
    add_marksheet(202, "Sarah Connor", 92, 85, 88, 79);
    print_marksheet(202);
    return 0;
}