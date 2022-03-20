vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
        int key=target-nums[i];
        if(mp.find(key)!=mp.end()){
        v.push_back(i);
        v.push_back(mp[key]);
        }
        mp[nums[i]]=i;
    }
    return v;
   }
