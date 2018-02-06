#include <stdio.h>
#include <math.h>
int isPerfectSquare(int n)
{
     int sum,i;
    for (sum=0,i=1; sum<n; i+=2)
    {
        sum += i;
        if (sum == n)
            return 1;
    }
    return 0;
}
int main(int argc, char const *argv[]) {
     int i,j,n,temp;
     printf("Enter the size of the array:");
     scanf("%d",&n );
     int ip[n],ref[n];
     for(i = 0;i < n;i++)
          scanf("%d",&ip[i]);
     for(i = 0;i < n;i++)
     {
          ref[i] = 0;
          if(ip[i]%2 == 0)
               ref[i] += 3;
          if(ip[i] % 6 == 0 && ip[i] % 4 == 0)
               ref[i] += 4;
          if(isPerfectSquare(ip[i]))
               ref[i] += 5;
     }
     for(i = 0;i < n;i++)
     {
          for(j = i+1;j < n;j++)
          {
               if(ref[i] > ref[j])
                    {
                         temp = ip[i];
                         ip[i] = ip[j];
                         ip[j] = temp;
                    }
          }
     }
     for(i = 0;i < n;i++)
          printf("%d  ",ip[i] );
     return 0;
}
