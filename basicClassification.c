#include <stdio.h>

/* return the fuctorial of input number.*/
int factorial(int n)
{
    int fact = n;
    for(int i = 1; i <n; i++)
    {
        fact *= i;
    }
    return fact;
}

int isPrime(int n)
{
    int prime=1;
    if(n == 1)
    {
        return 1;
    }
    if(n == 0 )
    {
        return 0;
    }
    else
    {
       
        for(int i = 2; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                prime = 0;
                return prime;
                break;
            }
        }
    }
    return prime;
}

int isStrong(int n)
{
    int strong;
    int  X = n;
    int sum = 0;
    int nextNum = 0;

    while(n > 0)
    {
        nextNum = n % 10;
        n /= 10;
        sum += factorial(nextNum);
    }
    if(sum == X ){
        strong=1;
    }
    else{
        strong=0;
    }
    return strong;
}


