   int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<pair<int,int>> adj[n+1];
    for(int i=0;i<times.size();i++){
        int u=times[i][0];
        int v=times[i][1];
        int wt=times[i][2];
        adj[u].push_back({v,wt});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,k});
    
    vector<int> dist(n+1);
    for(int i=0;i<=n;i++){
        dist[i]=1e9;
    }
    dist[k]=0;
        
   while(!pq.empty()){
        pair<int,int> top=pq.top();
        int d=top.first;
        int front=top.second;
        pq.pop();
        for(auto node:adj[front]){
            if(d+node.second<dist[node.first]){
                
                dist[node.first]=node.second+d;
                pq.push({dist[node.first],node.first});
            }
        }
     }
        
int maxi=0;
        
for(int i=1;i<=n;i++){
maxi=max(maxi,dist[i]);
}
        
return maxi==1e9?-1:maxi;
}
