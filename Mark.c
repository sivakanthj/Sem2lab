#include <stdio.h>

int largest(int, int, int);
int smallest(int, int, int);
float average(int, int, int, int);

int main()
{
    int m1, m2, m3;
    int l, s, V;
    float a;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    l = largest(m1, m2, m3);
    s = smallest(m1, m2, m3);
    a = average(m1, m2, m3, &V);

    printf("Largest mark = %d\n", l);
    printf("Smallest mark = %d\n", s);
    printf("Average = %.2f\n", a);
    printf("Value of V = %d\n", V);

    return 0;
}

int largest(int a, int b, int c)
{
    int max;

    if(a > b)
    {
        if(a > c)
            max = a;
        else
            max = c;
    }
    else
    {
        if(b > c)
            max = b;
        else
            max = c;
    }

    return max;
}

int smallest(int a, int b, int c)
{
    int min;

    if(a < b && a < c)
        min = a;
    else if(b < a && b < c)
        min = b;
    else
        min = c;

    return min;
}

float average(int a, int b, int c, int *v)
{
    float avg;

    avg = (a + b + c) / 3.0;

    *v = (avg >= 50) ? 1 : 0;

    return avg;
}
