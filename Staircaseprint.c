#include <Stdio.h>

void main()
{
// Enter the size of the stair case you want build
int n,i,j;

printf("Enter the size of the staircase");
scanf("%d",&n);

for(i=1;i<= n;i++)
{
    for(j=0;j<n-i;j++)
    {
        printf(" ");
    }
    for(j=n-i;j<n;j++)
    {
     printf("#");
    }
     printf("\n");
}

}
