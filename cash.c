#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int a=500;
    int b=250;
    int c=100;
    int d=50;
    int e=50;
    int f=25;
    int g=10;
    int j=5;
    int i=0;
    int amount;
    do
    {
       amount=get_int("type amount:");
    }
    while(amount<0);

    while(amount>=a)
    {
        amount=amount-a;
        i++;
    }
    while(amount>=b)
    {
        amount=amount-b;
        i++;
    }
    while(amount>=c)
    {
        amount=amount-c;
        i++;
    }
    while(amount>=d)
    {
        amount=amount-d;
        i++;
    }
    while(amount>=e)
    {
        amount=amount-e;
        i++;
    }
    while(amount>=f)
    {
        amount=amount-f;
        i++;
    }
    while(amount>=g)
    {
        amount=amount-g;
        i++;
    }
    while(amount>=j)
    {
        amount=amount-j;
        i++;
    }
    printf("the number of coins are: %i\n",i);
}