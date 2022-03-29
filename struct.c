#include<stdio.h>
struct A 
{
    int a;
    char y;
    float q;
    
};
int main()
{
    struct A p1;
    p1.a=10;
    p1.y='A';
    p1.q=1.22;
    printf("%d %c %.2f",p1.a,p1.y,p1.q);
    return 0;
}

/////////////////////////////////////////
///////////////////////////////////////
#include<stdio.h>
struct Student
{
    int roll;
    char Name[10];
    char grade;
    float subject[4];

};


void display(struct Student x)
{
    printf("Find the Students Details:");
    printf(" Roll No: %d\n",x.roll);
    printf(" Name: %s\n",x.Name);
    printf(" Grade: %c\n",x.grade);
    for( int i=0;i<4;i++)
    {
    printf(" subject: %d  %.2f\n",i+1,x.subject[i]);
    
    }
    
}
    int main()
    {
        //struct Student x;
        struct Student x={10,"Azad",'A',{55.22,44.33,77.99,78.36}};
        display(x);
        return 0;
    }