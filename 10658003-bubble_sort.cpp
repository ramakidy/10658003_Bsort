#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of element you want in your array: ";
    cin>>n;
    int arr[n],i,j;
    cout<<"Enter numbers in your array:\n";
   
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
           
            if(arr[j]>arr[j+1])
            {
               
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"After bubble sort the array becomes:\n";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}

