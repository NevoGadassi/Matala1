#include <stdio.h>
#include <math.h>   

//length of n
int countnum(int n)
{
    int count = 1;

    while(n / 10 != 0)
    {
        n /= 10;
        count++;
    }

    return count;
}


//m power n
int power(int m, int n)
{
    int answer = 1;
    
    for(int i = 0; i < n; i++)
    {
        answer *= m;
    }

    return answer;
}


int recursionrevrsNum(int n1,int n2){
   
   if (n1 == 0){
      return n2;
   }
   n2 *= 10;//move the last digit one step left and stay 0 in the right to the next digit
   n2 += (n1 % 10);//add the last digit of n1 to n2 
   n1 = n1/10;//delete the last digit
   return recursionrevrsNum(n1, n2);
}

int isPalindrome(int n)
{
    int revers =recursionrevrsNum(n,0);
    if(revers==n){
        return 1;
    }
    return 0;

}

int RecursionArmstrong(int n, int len)
{
    if(n == 0)
    {
        return 0;
    }
    return power((n % 10), len) + RecursionArmstrong((n / 10), len);
}

int isArmstrong(int n)
{
   int lenght = countnum(n);

   if(RecursionArmstrong(n, lenght) == n){
    return 1;
   }
   return 0;
}


