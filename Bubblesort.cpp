#include<iostream>
using namespace std;
int main()
{
    int Arr[]={12,23,55,4,86,1,72,80,79};
    int temp,n;
    int count;
    n=sizeof(Arr)/sizeof(int);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            count =1;
            if(Arr[j]>Arr[j+1])
            {
                temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
                
            }
        }
        if(count==0)
        {
            break;
        }
    }
    
    for(int i=0;i<n-1;i++)
    {
        cout<<Arr[i]<<" ,";
    }
    return 0;
}