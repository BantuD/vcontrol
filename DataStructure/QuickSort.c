#include<stdio.h>
int partition(int A[],int l,int h);
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void QuickSort(int A[],int l,int h)
    {
        int pi;
        if(l<h)
        {
            pi=partition(A,l,h);
            QuickSort(A,l,pi-1);
            QuickSort(A,pi+1,h);
        }
    }
int partition(int A[],int l,int h)
{
    int i=(l-1);
    int j;
    int pivot=A[h];
    for(j=l;j<=h-1;j++)
    {
     if(A[j]<pivot)
     {
         i++;
         swap(&A[i],&A[j]);
     }
    }
  swap(&A[i+1],&A[h]);
return (i+1);
}
void display(int n,int A[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d",A[i]);
    }
}
int main()
{
   int A[10]={1,4,2,6,5,3,7,9,0,8};
   QuickSort(A,0,9);
   display(10,A);
   return 0;
}