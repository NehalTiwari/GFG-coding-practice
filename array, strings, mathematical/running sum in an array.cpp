class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int stn=0; /*stn=sum till now*/
        for(int i=0;i<nums.size();i++){
            stn=stn+nums[i];
            nums[i]=stn;
        }
    return nums;
    }
};
