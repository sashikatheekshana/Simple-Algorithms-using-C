#include<stdio.h>
int main()
{
    int i,total=0,num;
    float avg;
    	printf("Enter number\n");
   		scanf("%d",&num);
    int arr[num];
   			 printf("Enter %d numbers\n",num);
   				 for(i=0;i<num;i++)
   					 {
       					 scanf("%d",&arr[i]);
       					 total+=arr[i];
   					 }
   					
    avg=total/num;
    printf("Average of %d numbers is %f\n ",num,avg);
    return 0;
}

