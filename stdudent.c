#include<stdio.h>
#include<string.h>
struct Student
{
    int roll;
    char Name[20];
    float subject[4];
};
 int main() 
 {
     struct Student S1;
     printf("Enter roll No :");
     scanf("%d\n",&S1.roll);
     printf("Enter Name :");
     scanf("%s\n",&S1.Name);
     for(int i=0;i<=4;i++)
     {
         printf("Enter the Subject :",i+1);
         scanf("%f\n",&S1.subject[i]);
     }
    // printf("Final Result of the Students");
     return 0;
 }