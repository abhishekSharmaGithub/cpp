class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      vector<vector<int>>res;
      if(nums.size()<3)
        return res;
      
      sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size();i++){
        
        if(i == 0 || (i != 0 && nums[i]!=nums[i-1])) {
          
           long long int  sum = target-nums[i];
           
           for(int j = i + 1; j < nums.size(); j++) {
             
             if(j==i+1 || nums[j] != nums[j-1]) {
                int k = j + 1;
                int l = nums.size()-1;
                long long sum1 = sum - nums[j];
                while(k < l) {
                  if(nums[k] + nums[l] == sum1){
                    res.push_back({nums[i],nums[j],nums[k],nums[l]});
                    while(k<l && nums[k]==nums[k+1])
                      k++;
                    while(k<l && nums[l]==nums[l-1])
                      l--;
                    k++;
                    l--;
                  }
                  else if( nums[k] + nums[l] > sum1){
                    l--;
                  }else{
                    k++;
                  }
                }
             }
           }
        }    
      }
      return res;

        
    }
};
