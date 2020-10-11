// Complete the plusMinus function below.


void main()
{
    int arr[10]={0,1,2,3,4,5,-6,-7,-8,9};

    plusMinus(10,arr);

}







void plusMinus(int arr_count, int* arr) {
    int positive =0,negative =0,zeros=0;
    int i;
    float temp=0.0;
    for(i=0;i<arr_count;i++)
    {
        if( arr[i] > 0)
        {
            positive++;
        }else if (arr[i]<0)
        {
            negative++;
        }else {
        zeros++;
        }
    }

temp = (float) positive/arr_count;
printf("%f\n",temp);
temp = (float) negative/arr_count;
printf("%f\n",temp);
temp =(float) zeros/arr_count;
printf("%f\n",temp);
}
