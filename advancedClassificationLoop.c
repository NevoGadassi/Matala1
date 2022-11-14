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

int isPalindrome(int n)
{
  int palindrome=1;
    int lenght;
    lenght=countnum(n);
  int spiritn[lenght];

// array of the real num
  for(int i=0;i<lenght;i++){
    spiritn[i] = n % 10;
        n /= 10;
        
  }
     for(int i = 0; i < lenght/2; i++)
    {
        if(spiritn[i] != spiritn[lenght-1-i])
        {
            palindrome = 0;
        }
    }
    return palindrome;
    
}

int isArmstrong(int n)
{

    int lenght = countnum(n);
    int spiritn[lenght];
    int sum = 0;

    for(int i=0;i<lenght;i++){
        spiritn[i] = n % 10;
        n /= 10;
        
        }

    
    for(int i = 0; i < lenght; i++)
    {
        sum += power(spiritn[i], lenght);
    }

    if(sum == n ){
        return 1;
    }
    return 0;
}




