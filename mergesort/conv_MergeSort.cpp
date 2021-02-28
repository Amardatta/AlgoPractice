#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
	int s1= m-l+1, s2= r-m;
	int *arr1= new int[s1];
	int *arr2= new int[s2];

 	int i=0;
	for(i=0; i<s1; i++)
		arr1[i]= arr[l+i];
	
	for(int j=0; j<s2; j++)
		arr2[j]= arr[l+ i++];

	//This is also Correct 
	// for(int i=0; i<s2; i++)
	// 	arr2[i]= arr[m+1+i];

	i= 0;   //Index for arr1
	int j= 0;   //Index for arr2
	int k= l;   //Index for arr

	while(i<s1 && j<s2)
		(arr1[i]>arr2[j])?(arr[k++]= arr2[j++]):(arr[k++]= arr1[i++]);

	while(i<s1)
		arr[k++]= arr1[i++];

	while(j<s2)
		arr[k++]= arr2[j++];

}

void mergesort(int arr[], int l, int r)
{
	if(l>=r) 
		return;

	int m= (r-l)/2 +l;

	mergesort(arr,l,m);
	mergesort(arr,m+1,r);
	merge(arr,l,m,r);
}

int main()
{
	int n= 7;
	int arr[]= {5,8,6,4,7,1,3};

	mergesort(arr,0,n);

	for(int x:arr)  //For this Range based loops to work compile with g++ -std=c++17 
		cout<< x<< " ";
}