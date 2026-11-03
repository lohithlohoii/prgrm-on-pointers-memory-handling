#inculde <stdio.h>
#include <math.h>
int main()
{
	float a [10],*ptr,mean,sum=0,var,sumstd=0,std;
	int n,i;
	printf("enter`the numbers of elements:");
	scanf("%d",&n);
	
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",a[i]);
	}
	ptr=a;
	/*caluclate sum*/
	for (i=0;i<n;i++)
	{
		sum=sum+(*ptr);
		ptr++;
	}
	/*caluclate maean*/
	mean=sum/n;
	ptr=a
	/caluclate variance*/
	for(i=0;i<n;i++)
	{
		sumstd=sumstd+pow((*ptr-mean),2);
		ptr++;
		var=sumstd/n;
		/*caluclate standard deviation*/
		std=sqrt(var);	
		printf("\nsum=%f\n",sum);
		printf("mean=%f\n",mean);
		printf("variance=%f\n",var);
		printf("standard deviation=%f\n",std);
		return 0;
	}
