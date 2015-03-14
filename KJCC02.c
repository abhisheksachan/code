#include <stdio.h>
int sum(long long int m);
int main()
{
	int t,m,min=0;
	long int n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld",&n);
		long long int a[n+1];
		

		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			m=sum(a[i]);
			if(m>min)
				min=m;
		}

		if(min==0)
			printf("red\n");
		else if(min==1)
			printf("blue\n");
		else if(min==2)
			printf("pink\n");
		else if(min==3)
			printf("white\n");
		else if(min==4)
			printf("black\n");
		else if(min==5)
			printf("violet\n");
		else if(min==6)
			printf("cyan\n");
		else if(min==7)
			printf("yellow\n");
		else if(min==8)
			printf("green\n");
		else if(min==9)
			printf("brown\n");



	}
	return 0;
}

int sum(long long int m)
{
	int k,s=10;
	
	while(s>9)
	{
		s=0;
		while(m>0)
			{
				k=m%10;
				s=s+k;
				m=m/10;
			}
	}
	return s;
}