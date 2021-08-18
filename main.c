#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,count=0;
   int arr[10]={1,3,2,7,8,4,5};
   int* upper_limit=(int*)malloc(2*sizeof(int));
   int* lower_limit=(int*)malloc(2*sizeof(int));
   int* c=(int*)malloc(2*sizeof(int));
   int ul[2]={7,8};
   int ll[2]={1,2};
   upper_limit=ul;
   lower_limit=ll;
   int *array=arr;
   
   for(k=0;k<2;k++)
   {
   for(i=0;i<10;i++)
   {
       //printf("Entered fpr loop %d\n",k);
       if (array[i]<=upper_limit[k] && array[i]>=lower_limit[k])
       {
           printf("Entered fpr loop %d--- %d %d %d \n",k,upper_limit[k],lower_limit[k],array[i]);
           count++;
           printf("%d\n",count);
       }
       
   }
 
   c[k]=count;
     count=0;
   }
   for(i=0;i<2;i++)
   printf("%d\n",c[i]);
return 0;
}
