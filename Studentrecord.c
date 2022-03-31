#include<stdio.h>
#include<string.h>
struct Student
{
    int roll;
    char name[20];
    char grade;
    float subject[4];
    
};
int main()
{    
    int sum=0;
    float avg;
    struct Student s1;
     printf("Enter the Roll Number :");
     scanf("%d",&s1.roll);
      printf("Enter the Name :");
     scanf("%s",&s1.name);
     printf("Enter the Grade :");
     scanf("%c",&s1.grade);
     printf("Enetr the subject :");
     for(int i=0;i<4;i++)
     {
         scanf("%f",&s1.subject[i]);
     
     sum =sum+subject[i];
     avg=(float)sum/4;
     }
    printf("Roll no %d\n",s1.roll);
    printf("Name %s\n",s1.name);
    printf("Gade %c\n",s1.grade);
    printf("Sum%dn",sum);
    printf("avg %f",avg);
    //printf("Roll no %d",s1.roll);
    
    return 0;
}