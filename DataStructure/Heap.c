#include<stdio.h>
void exit(int status);
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int Insert(int A[],int element,int size)
    {
      static int count=1;
      int k,root;
      printf("\nCount Value is: %d\n",count);
      if(count==size-1)
      {
          printf("\nHeap is full\n");
         //exit(0);
      }
      else
      {
          A[count]=element;
          k=count;
          root=k/2;
          if(root!=0)
          {
              while(A[root]<A[k] && root!=0)
              {
                  swap(&A[root],&A[k]);
                  k=root;
                  root=root/2;
              }
          }
      }
     return count++; 
    }
void display(int A[],int n)
   {
       int i;
       for(i=1;i<=n;i++)
       {
           printf("\n%d",A[i]);
       }
   }
int main()
{
    int A[10];
    int i,element,count;
    int opt=0;
    while(opt!=-1)
    {
        printf("\n1.For Insert");
        printf("\n2.To display");
        printf("\n-1.To exit");
        printf("\nEnter:>");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            printf("\nEnter Value:>");
            scanf("%d",&element);
            count=Insert(A,element,10);
            break;
            case 2:
            display(A,count);
            break;
            default:
            break;
        }
    }
    return 0;

}