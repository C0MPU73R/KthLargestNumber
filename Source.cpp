#include <iostream>
using namespace std;
void customSort(int myArray[], int n);
void customSwap(int* i, int* j);
int findKthLargest(int myArray[], int k);
int main()
{

	int myArray[] = {1, 3, 4, 6, 7, 9, 89};
	customSort(myArray, sizeof(myArray) / sizeof(myArray[0]));

	//find kth largest
	//array now sorted
	cout << findKthLargest(myArray, 5);
	system("pause");
	return 0;
}
void customSort(int myArray[], int n) //selection sort from geeksforgeeks.org
{
	int i, j, min;
	for (int i = 0; i < n-1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (myArray[j] < myArray[min])
			{
				min = j;
			}
		}
		customSwap(&myArray[min], &myArray[i]);
	}
}
void customSwap(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}
int findKthLargest(int myArray[], int k)
{
	int kth;
	for (int index = 0; index < 7; index++)
	{
		if (k == index+1)
		{
			kth = myArray[index];
		}
	}
	return kth;
}