class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> d;
        d.resize(nums.size(),0);
        int answer;
        d[0] = nums[0];
        answer = d[0];
        for(int i = 1; i < nums.size();++i)
        {
            if(nums[i] >= nums[i] + d[i-1])
            {
                d[i] = nums[i];
                
            }
            else if(nums[i] < 0 or (nums[i] >= 0 and d[i - 1] > 0))
            {
                d[i] = d[i - 1] + nums[i];
            }
            if(d[i] > answer)
            {
                answer = d[i];
            }
            
        }
        return answer;
    }

};