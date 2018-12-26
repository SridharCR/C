#include <stdio.h>
int main(int argc, char const *argv[]) {
     int n,i;
     //printf("Enter the size of array:");
     scanf("%d",&n);
     int a[n];
     //printf("Enter the array:");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     printf("%d",a[0]);
     return 0;
}
