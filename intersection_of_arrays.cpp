  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> v;
        unordered_set<int> st1;
        for(int i=0;i<n;i++){
            st1.insert(nums1[i]);
        }
        for(int i=0;i<m;i++){
            if(st1.find(nums2[i])!=st1.end()){ 
                v.push_back(nums2[i]);
                st1.erase(nums2[i]);
            }
        }
    return v;    
}
