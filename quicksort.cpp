#include<bits/stdc++.h>
using namespace std;
#include<conio.h>
int Partition(int* arr,int low,int high);
void Quicksort(int* arr,int low,int high)
{
if(low<high)
{
int pi=Partition(arr,low,high);
Quicksort(arr,low,pi-1);
Quicksort(arr,pi+1,high);
}
}
int Partition(int* arr,int low,int high)
{int j;
int pivot=arr[high];
int i=low-1;
for(j=low;j<high;j++)
{
if(arr[j]<=pivot)
{
i++;
swap(arr[i],arr[j]);
}
}
swap(arr[i+1],arr[high]);
return(i+1);
}
int main()
{
int arr[20],n,i;
cout<<"Enter the number of elements in an array";
cin>>n;
cout<<"Enter the elements of the array";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
Quicksort(arr,0,n);
for(i=0;i<n;i++)
{
    cout<<arr[i];
}
return 0;
}
