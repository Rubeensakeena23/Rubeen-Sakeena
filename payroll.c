#include<stdio.h>
#include<string.h>

struct employee{
char name[100];
float hourly_wage;
float minutes;
    float hours;
float overall_pay;
};
typedef struct employee employee;

void input_n_employees(int n, employee emp[n])
{
for(int i=0 ; i<n ; i++)
{
scanf("%s", emp[i].name);
scanf("%f", &emp[i].hourly_wage);
}
}

int name_check(int n, employee emp[n], char a[])
{
for(int i=0 ; i<n ; i++)
if(!strcmp(a, emp[i].name))
return i;
return 0;
}

void hours_input(int n, employee emp[n])
{
int m, mins, in;
char a[100];
scanf("%d", &m);
for(int i=0 ; i<m ; i++)
{
   scanf("%s", a);
    in = name_check(n, emp, a);
    scanf("%d", &mins);
    emp[in].minutes += mins;
}
}

void input(int n, employee emp[n])
{
    input_n_employees(n, emp);
hours_input(n, emp);
}

void compute_overall_pay(int n, employee emp[n])
{
for(int i=0 ; i<n ; i++)
{
emp[i].hours = (emp[i].minutes)/ 60;
if(emp[i].hours <= 40)
emp[i].overall_pay = (emp[i].hourly_wage)*(emp[i].hours);
else
   emp[i].overall_pay = (40*emp[i].hourly_wage)+((emp[i].hours-40)*emp[i].hourly_wage*1.5);
}
}

void print_one_employee(char name[], float hrs, float total_pay)
{
printf("%s: %.2f hours, $%.2f\n ", name, hrs, total_pay);
}

void print_n_employees(int n, employee emp[n])
{
for(int i=0 ; i<n ; i++)
{
if(emp[i].hours)
print_one_employee(emp[i].name, emp[i].hours, emp[i].overall_pay);
}
}

int main()
{
int n;
    scanf("%d", &n);
employee emp[n];
input(n, emp);
compute_overall_pay(n, emp);
print_n_employees(n, emp);
return 0;
}

