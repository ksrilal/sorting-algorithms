#include <stdio.h>
#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter elements: \n");
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	int j, temp, is_sorted;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			is_sorted = 1;
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				is_sorted = 0;
			}
		}
		
		if(is_sorted == 1) break;
	
	}
	
	printf("\nSorted elements: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	
	
	
	return 0;
}
