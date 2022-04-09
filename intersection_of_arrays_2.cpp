vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int,int> mp;
        int n=nums1.size();
        int m=nums2.size();
        
    for(int i=0;i<n;i++){
        mp[nums1[i]]++;
        
    }
        vector<int> v;
   for(int i=0;i<m;i++){
       if(mp.find(nums2[i])!=mp.end()){
           mp[nums2[i]]--;
           v.push_back(nums2[i]);
        }
   if(mp[nums2[i]]==0) mp.erase(nums2[i]);
       }
       return v; 
    }
