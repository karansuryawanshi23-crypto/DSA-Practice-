class Solution {
public:
    using ll=long long;
    ll maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();

        unordered_map<int,int>mp;

        int i=0;
        int j=k-1;

        ll maxSum=0;
        ll sum=0;

        for(int k=i;k<=j;k++){
            mp[nums[k]]++;
            sum+=nums[k];
        }

        while(j<n){

            if(mp.size()==k) maxSum=max(sum,maxSum);

            sum-=nums[i];
            mp[nums[i]]--;
            if(mp[nums[i]]==0) mp.erase(nums[i]);
            i++;

            j++;
            if(j<n){
                sum+=nums[j];
                mp[nums[j]]++;
            }

        }

        return maxSum;
    }
};