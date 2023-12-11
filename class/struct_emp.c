#include <stdio.h>
#include<stdlib.h>
struct employee
    {
        char name[20];
        int age;
        int salary;
    };
int main()
{
    FILE *fp;   
    fp=fopen("abc.txt","w");
    int n,i;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    
    struct employee emp[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name age and salary of employee %d: ",i+1);
        scanf("%s",&emp[i].name);
        scanf("%d",&emp[i].age);
        scanf("%d",&emp[i].salary);
        fwrite(&emp[i],sizeof(emp[i]),1,fp);        
    }
    fclose(fp);
    fp=fopen("abc.txt","r");
    printf("Details of employee are :");
    for(i=0;i<n;i++)
    {
        fread(&emp[i],sizeof(emp[i]),1,fp);
        if(emp[i].salary>50000){
            printf("The name of the employee is %s\n",emp[i].name);
            printf("The age of the employee is %d\n",emp[i].age);
            printf("The salary of the employee is %d\n",emp[i].salary);
        }
        else{
            printf("Sab Nalle Hai Bhai\n");
        }
    }
    fclose(fp);
    return 0;
}