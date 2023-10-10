int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	int res = 0;
    int arr_size = arr.size();
    for(int i=0; i<arr_size; i++)
        res = res^arr[i];
    for(int i=1; i<arr_size; i++)
        res = res^i;
    return res;

}