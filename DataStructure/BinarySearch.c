#include<stdio.h>
int BinarySearch(int A[],int l,int h,int E)
{
    int mid;
    if(l<h)
    {
      mid=((h-l)/2 +l);
      if(E==A[mid])
      {
          return mid;
      }
    
    if(E<A[mid])
    {
        BinarySearch(A,l,mid,E);
    }
    else
    {
        BinarySearch(A,mid,h,E);
    }
    }
  else
  {
      return -1;
  }
     
}
int main()
{
    int arr[]={1,2,3,4,5,17,19,20,33,40,70,90,100,120};
    //Search for element value 7 index
    int v=BinarySearch(arr,0,13,70);
    printf("Value 7 found in index %d",v);
    return 0;
}