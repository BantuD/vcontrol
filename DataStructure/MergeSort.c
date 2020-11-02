#include<stdio.h>
void Merge(int A[],int B[],int l,int mid,int h);
void MergeSort(int A[],int B[],int l,int h)
      {
          int mid;
          if(l<h)
          {
              mid=(l+h)/2;
              MergeSort(A,B,l,mid);
              MergeSort(A,B,mid+1,h);
              Merge(A,B,l,mid,h);
          }
      }

void Merge(int A[],int B[],int l,int mid,int h)
{
    int i,j,k=0;
    i=l;
    j=mid+1;
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
        {
            B[k++]=A[i++];
        }
        else
        {
            B[k++]=A[j++];
        }

    }
    while(i<=mid)
    {
        B[k++]=A[i++];
    }
    while(j<=h)
    {
        B[k++]=A[j++];
    }
}
void display(int a[],int n)
{
  int i;
  for(i=-0;i<n;i++)
  {
  printf("\n%d",a[i]);
  }
}
int main()
{

    int arr[]={6,5,1,2,3,7,8,11,10,9};
    int b[10];
    MergeSort(arr,b,0,9);
    display(b,9);
    return 0;

}
