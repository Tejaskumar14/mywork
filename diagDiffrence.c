#include <Stdio.h>

void main()
{

//Declaration
int n,i,j;
int sum=0,sum1=0,result=0;

printf("Enter the size of a square matrix");
scanf("%d",&n);
int arr[n][n];
printf("Enter the elements of the matrix in row order");

for(i=0;i<n;i++)
{
    for (j=0;j<n;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
//calculate the diagonal sum from right to left
for(i=0;i<n;i++)
{
    sum = sum +arr[i][i];
    sum1= sum1+ arr[i][n-i-1];
}
printf("%d ",sum);
printf("%d",n);
result = abs(sum -sum1);
printf("result of diagonal difference %d",result);

}

