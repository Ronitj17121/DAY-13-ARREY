#include<stdio.h>
#include<conio.h>

main()
{


int i,n,sum=0;

	printf("Enter the size array : ");
	scanf("%d",&n);

	int a[n];

	for(i=0; i<n; i++)
	{
		printf("Enter a value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
  	
  	for(i=0; i<n; i++)
	{
		sum =sum+a[i];
	}
	printf("avg is %d",sum/n);
  
}
