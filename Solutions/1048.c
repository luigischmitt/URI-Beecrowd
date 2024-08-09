// beecrowd | 1048 (Salary Increase)

#include <stdio.h>
 
int main() {
 
    float new_salary = 0, salary;

    scanf("%f", &salary);

    if (salary <= 400) {
        new_salary = 1.15*salary;
        printf("Novo salario: %.2f\n", new_salary);
        printf("Reajuste ganho: %.2f\n", new_salary-salary);
        printf("Em percentual: 15 %\n");
    } else if (salary > 400 && salary <= 800) {
        new_salary = 1.12*salary;
        printf("Novo salario: %.2f\n", new_salary);
        printf("Reajuste ganho: %.2f\n", new_salary-salary);
        printf("Em percentual: 12 %\n");
    } else if (salary > 800 && salary <= 1200) {
        new_salary = 1.10*salary;
        printf("Novo salario: %.2f\n", new_salary);
        printf("Reajuste ganho: %.2f\n", new_salary-salary);
        printf("Em percentual: 10 %\n");
    } else if  (salary > 1200 && salary <= 2000) {
        new_salary = 1.07*salary;
        printf("Novo salario: %.2f\n", new_salary);
        printf("Reajuste ganho: %.2f\n", new_salary-salary);
        printf("Em percentual: 7 %\n");
    } else {
        new_salary = 1.04*salary;
        printf("Novo salario: %.2f\n", new_salary);
        printf("Reajuste ganho: %.2f\n", new_salary-salary);
        printf("Em percentual: 4 %\n");
    }
    
    return 0;
}
