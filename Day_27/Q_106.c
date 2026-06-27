#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee e[100];
        int n=0,i,choice;

    while(1) {

        printf("\n1.Add\n2.Displa\n3.Exit\n");
        scanf("%d",&choice);
  if(choice==1) {
  printf("Enter ID Name  and The Salary: ");
            scanf("%d%s%f",
                &e[n].id,
                e[n].name,
                &e[n].salary);
 n++;
        }
 else if(choice==2) {
   for(i=0;i<n;i++) {
 printf("\nID=%d",e[i].id);
     printf("\nName=%s",e[i].name);
         printf("\nSalary=%.2f\n",
                       e[i].salary);
            }
}

  else
           
  
  break;
    }

    return 0;
}