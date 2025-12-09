#include<stdio.h>
#include<string.h>
#include<ctype.h>

void merge_sort(int *arr,int n)
{
	printf("\nMerge sort:\nTime complexity : O(n log n)\nSpace complexity : O(n)\n");
	void conquer(int *left,int l_len,int *right,int r_len,int *ar,int len)
	{
		int i=0,l=0,r=0;
		while(l < l_len && r < r_len)
		{
			if (left[l]<right[r])
			{
				ar[i] = left[l];
				i++;
				l++;
			}
			else
			{
				ar[i] = right[r];
				i++;
				r++;
			}
		}
		while(l<l_len)
		{
			ar[i] = left[l];
			i++;
			l++;
		}
		while(r<r_len)
		{
			ar[i] = right[r];
			r++;
			i++;
		}
		return ;
	}

	void divide(int *arr,int n)
	{
		// base case
		if (n == 1)
			return ;
		
		// creating left,right array	
		int mid =n/2;
		int leftArray[mid],rightArray[n-mid];
		
		for(int i=0;i<mid;i++)
			leftArray[i] = arr[i];
		
		for(int i=mid;i<n;i++)
			rightArray[i-mid] = arr[i];
		
		// recursion 
		divide(leftArray,mid);
		divide(rightArray,n-mid);
		// calling merge 
		conquer(leftArray,mid,rightArray,n-mid,arr,n);
		return ;
	}
	divide(arr,n);
	return ;
}

void bubble_sort(int *arr,int n)
{
	printf("\nBubble sort:\nTime complexity : O(n^2)\nSpace complexity : O(1)\n");
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	return ;
}

void insertion_sort(int *arr,int n)
{
	printf("\nInsertion sort:\nTime complexity : O(n^2)\nSpace complexity : O(1)\n");
	for(int i=1;i<n;i++)
		for (int j=i;j>=1;j--)
			if (arr[j] < arr[j-1] )
			{
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
	return ;
}

void selection_sort(int *arr,int n)
{			
	printf("\nSelection sort:\nTime complexity : O(n^2)\nSpace complexity : O(1)\n");			   
	for(int i=0;i<n;i++)   
	{
		int min_index = i;
		for(int j=i+1;j<n;j++)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
	return ;
}

int main()
{	
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("Enter a sorting algorithm : \n");
	printf("1.Bubble sort ----> 1\n2.Insertion sort--> 2\n3.Selction sort --> 3 \n4.Merge sort -----> 4\n");
	int choice;
	scanf("%d",&choice);
	while(choice>4 && choice<1)
	{
		printf("Please enter a valid choice : ");
		scanf("%d",&choice);
	}
	switch(choice)
	{
		case 1:
			bubble_sort(arr,n);
			break;
		case 2:
			insertion_sort(arr,n);
			break;
		case 3:
			selection_sort(arr,n);
			break;
		case 4:
			merge_sort(arr,n);
	}

	printf("Sorted array :\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
