 vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        int n=nums.size();
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        while(k-- && !pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
