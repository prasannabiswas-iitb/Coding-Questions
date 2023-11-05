#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// optimized approach - sort the array.
	sort(arr.begin(), arr.end());
	set<vector<int>> distinct_triplets;

	// find triplets with two pointer approach.
	for(int i=0; i<n-2; i++)
	{
		int start = i+1;
		int end = n-1;
		while(start < end){
			if(arr[i] + arr[start] + arr[end] == K){
				distinct_triplets.insert({arr[i], arr[start], arr[end]});
				start++;
				end--;
			}
			else if(arr[i] + arr[start] + arr[end] < K)
				start++;
			else
				end--;
		}
	}

	//create a vector from the set and return.
	vector<vector<int>> triplets;
	set<vector<int>>::iterator it = distinct_triplets.begin();
	for(; it!=distinct_triplets.end(); it++)
		triplets.push_back(*it);
	return triplets;
}