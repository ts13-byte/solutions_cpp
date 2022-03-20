   vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int n=nums.size();
        if(n<3) return v;
        sort(nums.begin(),nums.end());
     
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) i++;
            int j=i+1,k=n-1;
            while(j<k){
            if(nums[j]+nums[k]+nums[i]==0){
            v.push_back({nums[i],nums[j],nums[k]});
             int val1=nums[j],val2=nums[k];
                while(j<k&&nums[j]==val1)j++;
                while(j<k&& nums[k]==val2)k--;
            }
            else if(nums[j]+nums[k]+nums[i]<0) j++;
            else k--;
            }
       }
        return v;
    }
