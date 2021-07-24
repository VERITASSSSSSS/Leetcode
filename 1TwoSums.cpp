class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr(2);

        //0(n^2)
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
                // Got it (if nums[i]+ nums[i]+1 = target)
                if(nums[i]+nums[j]== target){
                    arr[0] = i;
                    arr[1] = j;  //save index, not num
                }

            }
            return arr;

            }
};


