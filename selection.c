#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int size;
	printf("Enter number of elements: ");
	scanf("%d",&size);
	
	int array[size];
	int i = 0, j = 0, k = 0;
	int temp, flg;
	
	printf("Enter elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	} 
	
	for(i=1;i<size;i++)
	{
			j = i;
			
			while(j<size && array[j]<array[j-1])
			{
					temp = array[j];
					flg = j;
					j++;	
			}
			array[flg] = array[i-1];
			array[i-1] = temp;
	}
	
	printf("\nSorted elements: ");
	for(k=0;k<size;k++)
		printf("%d ",array[k]);
	
	return 0;
}
