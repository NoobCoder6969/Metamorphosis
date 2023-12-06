/*This program accepts an array and an other integer, and returns the closest array element to that integer.
This is basically a tweaked binary search. More optimizations incoming...
*/
#include<stdio.h>
#include <stdlib.h>
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
    printf("The closest element is = %d \n",x);
    return val ;
}

int main() {
    int number;
    printf("Enter the number of elements : ");
    scanf("%d",&number);
    int arr[number];
    printf("Enter Array elements : ");
    for(int i=0;i<number-1;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int left = 0;
    int right = number-1;
    int target;
    printf("Enter your target element : ");
    scanf("%d ",&target);

    int ans = binarySearchClosest(arr, 0, number-1, target);
    printf("The closest element is at the index : %d",ans);
    return 0;
}