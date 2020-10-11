#include<stdio.h>

void main()
{
//for size of list
int num;
int i;
int greater;

    printf("enter the size of list\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter %d elements\n",num);
    for(i=0;i<num;i++)
    {
    scanf("%d",&arr[i]);
    }

   //find the max of the array
   greater = arr[0];
    for(i=0;i<num;i++)
    {
        if (arr[i]>= greater)
        {
        greater = arr[i];
        }
    }
    printf("greatest number is %d",greater);

}
