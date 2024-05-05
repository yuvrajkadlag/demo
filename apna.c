#include<stdio.h>
void quick_sort( int arr[], int L,int H);
void main()
{
	int i,n;
	int arr[50];
	printf("\nHow many number you want:");
	scanf("%d",&n);
	printf("\nEnter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
		}
	printf("\narray elemnts are:");	
		 
		for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
		
		}
		quick_sort(arr,0,n-1);
		
		printf("\nafter sorting array element:\n");
		for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
		}
	}
	void quick_sort(int arr[],int L, int H)
	
	{
		int temp;
		int low=L+1;
		int pivot=L;
		int high=H;
		while(low<=high)
		{
			while(arr[low]<pivot)
			{
				low++;
				
				}
			while(arr[high]>pivot)
			{
				high--;
				
				
				}
				if(low<=high)
				{
					temp=arr[high];
					arr[high]=arr[low];
					arr[low]=temp;
					high++;
					low++;
					
					
					}
					
			
			}
			temp=arr[high];
			arr[high]=arr[L];
			arr[L]=temp;
	
		
		
		
		if(L<high)
		{
		
			quick_sort(int arr[],L,high-1);
			
		}
		if(low<H)
		{
		
			 quick_sort( int arr[],low,H);
		}
			
			
	}