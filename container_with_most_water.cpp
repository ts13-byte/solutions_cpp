  int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int ans=0;
        
        
        while(start<end){
            ans=max(ans,min(height[start],height[end])*(end-start));
            if(height[start]<=height[end]) start++;
            else end--;
        }
        return ans;
    }
