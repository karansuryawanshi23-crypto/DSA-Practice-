class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int zero=0;
        int n= nums.size();

        for(int right =0; right<n ;right++){
            if(nums[right]==0){
                zero++;
            }
            if(zero > k){
                if(nums[left]==0){
                    zero--;
                }
                left++;
            }
        }
        return n-left;
    }
};