#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(int a[], int n);

int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter elements:\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	sort(a,n);

	return 0;
}

void sort(int a[], int n)
{
	int i, j, temp, k;
	
	for(i=1;i<n;i++)
	{
		j = i;
		
		while(j>=0 && a[j-1]>a[j])
		{
			temp = a[j-1];
			a[j-1] = a[j];
			a[j] = temp;
			j--;
		}
	}
	
	printf("\nSorted elements: ");
	for(k=0;k<n;k++)
		printf("%d ",a[k]);
}
