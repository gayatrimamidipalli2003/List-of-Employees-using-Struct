#include<stdio.h>
struct employee
{
int id;
char name[30];
int g_sal;
int hra;
float da;
float ta;
int pf;
int n_sal;
};
int main()
{
int n;
printf("Number of employees: \n");
scanf("%d",&n);
struct employee e[n];
int i;
for(i=0; i<n; i++)
{
printf("Enter employee %d id\n", i+1);
scanf("%d",&e[i].id);
printf("Enter employee %d name\n", i+1);
scanf("%s",e[i].name);
printf("Enter employee %d gross_salary\n", i+1);
scanf("%d",&e[i].g_sal);
e[i].hra = 0.02 * e[i].g_sal;
e[i].da = 0.015 * e[i].g_sal;
e[i].ta = 0.015 * e[i].g_sal;
e[i].pf = 0.04 * e[i].g_sal;
e[i].n_sal = e[i].g_sal + e[i].hra + e[i].da + e[i].ta - e[i].pf;
}
printf("id\tname\tg_sal\thra\tda\tta\tpf\tn_sal\n");
printf("-------------------------------------------\n");
for(i=0; i<n; i++)
{
printf("%d\t%s\t%d\t%d\t%.1f\t%.1f\t%d\t%d\n", e[i].id, e[i].name, e[i].g_sal, e[i].hra, e[i].da, e[i].ta, e[i].pf, e[i].n_sal);
}
}
