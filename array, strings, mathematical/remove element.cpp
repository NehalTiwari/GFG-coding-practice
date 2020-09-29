/*OM NAMAH SHIVAY!*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int i=0; //using two pointer method
       for(int j=0;j<nums.size();j++){     /*idea here is to see if element at j is equal to val or not, if it is equal the loop breaks without incrementing i but j anyhoes gets incremented, but if it is not equal then element at i is replaced by element at j and i incremented*/
           if(nums[j]!=val){
               nums[i]=nums[j];
               i++;
           }
       } 
        return i; /*because at the end we reach j=nums.size so where i might have reached till that point is the real size of the array because it was made sure that all the nums[i] contains a value not equal to val*/
    }
};
