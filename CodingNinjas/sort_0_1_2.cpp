#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   // Using DNF:
   // 0 0 0 0 0 1 1 1 1 0 2 1 2 1 0 2 2 2 2
   //           L       M---------H
   // array from mid to high is unsorted.
   int low=0, mid=0, high=n-1;
   while(mid<=high)
   {
      if(arr[mid]==0){
         swap(arr[mid], arr[low]);
         mid++;
         low++;
      }
      else if(arr[mid]==1)
         mid++;
      else{
         swap(arr[mid], arr[high]);
         high--;
      }
   }
}