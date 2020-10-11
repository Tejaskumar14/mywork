#include <stdio.h>

int main (void)
{
 int arr[]={56,39,55,25,37}
 int outarr[5],i;
 gradingStudents(5,arr,outarr);

 for (i=0;i<5;i++)
 {
     printf("%d/n", arr[i]);
 }

}



int gradingStudents(int grades_count, int* grades, int* result_count) {
    int i;
    int rem = 0 ;

    for(i=0;i<grades_count;i++)
    {
       result_count[i]=grades[i];
        rem = grades[i]%5 ;
        if((rem < 3)&& (grades[i]>38))
        {
            result_count[i] = grades[i] + rem ;
        }

    }

 return 0;
}
