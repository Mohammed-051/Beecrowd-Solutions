#include<stdio.h>
int main()
{
    int sum=0,i,n,j;

    scanf ("%d",&n);

    int a[n] ;//data_type array_name[array_size];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    printf("%d\n",sum);

    for (i=1; i<=sum; i++)
    {
        if(sum%i == 0)
        {
            printf("%d\n",i);

        }
    }

    return 0;
}
