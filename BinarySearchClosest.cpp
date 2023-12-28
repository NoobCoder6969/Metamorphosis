#include<iostream>
using namespace std;

int binarySearchClosest(int arr[], int low, int high, int target)
{ 
    int x ;
    int val ;
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        int difference = abs(target - arr[mid]);
        val = mid ;
        x = arr[mid];

        if(abs(arr[mid+1]-target)<=difference)
            low=mid+1;
        else if(abs(arr[mid-1]-target)<difference)
            high=mid-1;
        else
            break;   

    }
    cout<<"The closest element is = "<<x<<endl;
    return val ;
}

int main()
{
    int number;
    cout<<"Enter the number of elements : ";
    cin>>number;

    int arr[number];
    cout<<"Enter Array elements : "<<endl;

    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }
    int left = 0;
    int right = number-1;
    int target;
    cout<<"Enter your target element : ";
    cin>>target;

    int ans = binarySearchClosest(arr, 0, number-1, target);
    cout<<"The closest element is at the index : "<<ans<<endl;
    return 0;
}
