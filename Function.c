#include<stdio.h>
#include<math.h>

long int fact(int n)
{
    int i;
    long int f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}

int main()
{
    float x,sum=0;
    int i,n,sign=1;

    printf("Enter x in radians: ");
    scanf("%f",&x);

    printf("Enter number of terms: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum + sign * pow(x,(2*i-1)) / fact(2*i-1);
        sign = -sign;
    }

    printf("sin(x) = %f",sum);

    return 0;
}
#include<stdio.h>
#include<math.h>

long int fact(int n)
{
    int i;
    long int f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}

int main()
{
    float x,sum=0;
    int i,n,sign=1;

    printf("Enter x in radians: ");
    scanf("%f",&x);

    printf("Enter number of terms: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        sum = sum + sign * pow(x,(2*i)) / fact(2*i);
        sign = -sign;
    }

    printf("cos(x) = %f",sum);

    return 0;
}
#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    float sum=1;

    printf("Enter number of terms: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        sum = sum + pow((1.0/i),i);
    }

    printf("Sum = %f",sum);

    return 0;
}
