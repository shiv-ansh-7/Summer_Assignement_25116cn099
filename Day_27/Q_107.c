#include <stdio.h>
#include <string.h>
#define MAX_PAYROLL 100
struct SalaryRecord {
    char emp_id[10];
    char name[50];
    double basic_salary;
};struct SalaryRecord payroll[MAX_PAYROLL];
int payroll_count = 0;
void add_payroll_record(char emp_id[], char name[], double basic_salary) {
    if (payroll_count >= MAX_PAYROLL) return;
      strcpy(payroll[payroll_count].emp_id, emp_id);
    strcpy(payroll[payroll_count].name, name);
    payroll[payroll_count].basic_salary = basic_salary;
    payroll_count++;
}
void process_salary(char emp_id[]) {
    for (int i = 0; i < payroll_count; i++) {
        if (strcmp(payroll[i].emp_id, emp_id) == 0) {
            double basic = payroll[i].basic_salary;
            double hra = 0.20 * basic;  
            double da = 0.10 * basic;
            double pf = 0.12 * basic;   
            double tax = 0.05 * basic;  
            
            double gross_salary = basic + hra + da;
            double deductions = pf + tax;
            double net_salary = gross_salary - deductions;

            printf("\n PAYSLIp\n");
            printf("Employee id : %s\n", payroll[i].emp_id);
            printf("Name          : %s\n", payroll[i].name);
            printf("Basic Pay   : $%.2f\n", basic);
            printf("Gross Salary: $%.2f\n", gross_salary);
            printf("Deductions  : $%.2f\n", deductions);
            printf("------\n");
            printf("NET SALARY  : $%.2f\n", net_salary);
            printf("===\n");
            return;
        }
    }
    printf("No payroll record found for ths id ID: %s\n", emp_id);
}int main() {
    add_payroll_record("E101", "Mark R.", 5000.0);
    process_salary("E101");
    return 0;
}