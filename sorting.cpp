#include <iostream>
using namespace std;

//print sorted array
void printArray(int arr[], int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}

//linear sort
void linearSort(int arr[], int n)
{
	int i,j,temp;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp ;
			}
		}
	}
	
	printArray(arr, n);
}

//selection sort
void selectionSort(int arr[],int n)
{
	int i,j,temp;
	int min_idx;
	
	for(i=0;i<n;i++)
	{
		min_idx = i;
		for(j=i+1;j<n-1;j++)
		{
			if(arr[j] < arr[min_idx])
			{
				min_idx=j;
				
				temp = arr[min_idx];
				arr[min_idx] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	printArray(arr, n);
}




int main()
{
	int array[] = {7,8,9,5,3,1,2};	
	int i,n;
	
	n =  sizeof(array)/sizeof(array[0]);
	
	//linearSort(array, n);
	selectionSort(array, n);
	
	return 0;
}
