class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> umap;
        for(int i=0; i<arr.size();i++)
            umap[arr[i]]++;
        unordered_set<int> us;
        for(auto it=umap.begin(); it!=umap.end(); it++)
        {
            if(us.find(it->second)==us.end())
                us.insert(it->second);
            else
                return false;
        }
        return true;
    }
};