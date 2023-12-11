#include<stdio.h>
#include<stdlib.h>
struct employee
    {
        char name[20];
        int age;
        int salary;
    };
struct student
    {
        char name[20];
        int age;
        int marks;
    };
int main(){
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
            printf("The name of the employee is %s ",emp[i].name);
            printf("The age of the employee is %d ",emp[i].age);
            printf("The salary of the employee is %d ",emp[i].salary);
        }
        else{
            printf("Sab Nalle Hai Bhai ");
        }
    }
    fclose(fp);
    fopen("abc2.txt","w");
    printf("Enter the number of students: ");
    scanf("%d",&n);


    struct student stu[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter name age and marks of student %d: ",i+1);
        scanf("%s",&stu[i].name);
        scanf("%d",&stu[i].age);
        scanf("%d",&stu[i].marks);
        fwrite(&stu[i],sizeof(stu[i]),1,fp);        
    }
    fclose(fp);
    fp=fopen("abc2.txt","r");
    printf("Details of student are :");
    for(i=0;i<n;i++)
    {
        fread(&stu[i],sizeof(stu[i]),1,fp);
        if(stu[i].marks>50){
            printf("The name of the student is %s ",stu[i].name);
            printf("The age of the student is %d ",stu[i].age);
            printf("The marks of the student is %d ",stu[i].marks);
        }
        else{
            printf("Sab Nalle Hai Bhai ");
        }
    }
    fclose(fp);

    // append info of abc2.txt into abc.txt and print on terminal
    fp=fopen("abc.txt","a");
    fp=fopen("abc2.txt","r");
    fgets(stu[i].name,20,fp);
    printf("%s",stu[i].name);
    fclose(fp);
        
    return 0;
}