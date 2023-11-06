#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	vector<int> ans;
	int carry = 0, sum=0, res=0;
	while(m>0 && n>0){
		sum = a[n-1] + b[m-1] + carry;
		res = sum%10;
		carry = sum/10;
		ans.push_back(res);
		m--;
		n--;
	}
	while(m>0)
	{
		sum = b[m-1] + carry;
		res = sum%10;
		carry = sum/10;
		ans.push_back(res);
		m--;
	}
	while(n>0)
	{
		sum = a[n-1] + carry;
		res = sum%10;
		carry = sum/10;
		ans.push_back(res);
		n--;
	}
	if(carry>0)
		ans.push_back(carry);
	int left=0;
	int right=ans.size()-1;
	while(left<right)
	{
		swap(ans[left], ans[right]);
		left++;
		right--;
	}
	return ans;
}