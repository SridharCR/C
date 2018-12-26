#include <stdio.h>

int main() {
	//code
	int t,n,k,i,j,temp;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&n,&k);
	    int a[n],b[n],count=0;
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
	    b[i]=(k-(a[i]%k))%k;
	    for(i=0;i<n-1;i++)
	    {
	        for(j=0;j<n-1-i;j++)
	        {
	            if(b[j]>b[j+1])
	            {
	                temp=b[j];
	                b[j]=b[j+1];
	                b[j+1]=temp;
	            }
	        }
	    }
	   int sum=0;
	    for(i=0;i<(n+1)/2;i++)
	    sum=sum+b[i];
	    printf("%d\n",sum);
	}
	return 0;
}
