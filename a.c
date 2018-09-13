#include <stdio.h>//Hello 
int main()
{
	int a[100],i,n,m,k;
	scanf("%d",&n);
	printf("enter the data\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("original \n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
		printf("enter the index at which data inserted\n");
		scanf("%d\n",&m);
		printf("%d\n",m);
		printf("enter the new data\n");
		scanf("%d\n",&k);
	

	for(i=m;i<=n+1;i++)
	{
		a[i+1]=a[i];
	}
	a[m]=k;

	printf("after the insertion\n");

	for(i=0;i<n+1;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;

}
