class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minp=nums[0],maxp=nums[0];
        int n=nums.size();
        int res=nums[0];
        for(int i=1;i<n;i++){
            int p1=minp,p2=maxp;
                minp=min(min(p1*nums[i],p2*nums[i]),nums[i]);
                maxp=max(max(p1*nums[i],p2*nums[i]),nums[i]);
            
            res=max(res,maxp);
        }    
        return res;   
    }
};
