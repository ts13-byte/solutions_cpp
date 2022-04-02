   vector<string> findRepeatedDnaSequences(string s) {
       int n=s.length();
        unordered_set<string> result,visited;
        vector<string> v;
        for(int i=0;i<n-9;i++){
           string sub=s.substr(i,10);
           if(visited.find(sub)!=visited.end()){
               result.insert(sub);
           }
            else{
                visited.insert(sub);
            }
        }
        vector<string> ans;
        for(auto &it:result){
            ans.push_back(it);
        }
       return ans; 
    }
