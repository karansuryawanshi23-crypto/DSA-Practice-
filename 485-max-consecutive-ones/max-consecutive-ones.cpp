class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cureentSum=0;
        int j=0;
        int n= nums.size();
        int maxAns=0;

        while(j<n){
            if(nums[j]==1){ 
                cureentSum++;
            }
            else{
                maxAns= max(maxAns,cureentSum);
                cureentSum=0;
            }
            j++;
        }
        return max(maxAns,cureentSum);
    }
    
};