#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> res;
   sort(arr.begin(),arr.end());
   int size=arr.size();
   for(int i=0; i<size; i++){
      for(int j=i+1; j<size; j++){
         if(arr[i]+arr[j]==s){
            vector<int> temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            res.push_back(temp);
         }
      }
   }
   return res;
}