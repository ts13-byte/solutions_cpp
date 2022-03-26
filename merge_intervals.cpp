    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      sort(intervals.begin(),intervals.end());
      
    int n=intervals.size();
    vector<vector<int>> ans;
            
    vector<int> v=intervals[0];
    for(int i=1;i<n;i++){
        
        if(v[1]>=intervals[i][0]) {
            v[1]=max(v[1],intervals[i][1]);
        }
        else{
            ans.push_back(v);
            v=intervals[i];
        }
    }
    ans.push_back(v);    
    return ans;  
}
