#include<stdio.h>
int main()
{
    int t,v1,v2,i,size;
    v1=0;
    v2=1;
    printf("\nEnter the number of terms in series:>");
    scanf("%d",&size);
    int A[size];
    for(i=0;i<size;i++)
    {
        if(i==0 || i==1)
        {
            A[i]=i;
            continue;
        }
        A[i]=v1+v2;
        t=v2;
        v2=v1+v2;
        v1=t;
    }
    printf("\nPrinting The array\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",A[i]);
    }    
    return 0;
}