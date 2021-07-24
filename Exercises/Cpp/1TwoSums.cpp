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

***************************************************************************************

// 1) target-nums[]

//Runtime: 43 ms, faster than 37.51% of C++ online submissions for Two Sum.
//Memory Usage: 14.3 MB, less than 6.69% of C++ online submissions for Two Sum.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //2(0) 7(1) 11(2) 15(3)
        
        // [3,4] 6 if 6-3 = if 3 exists is not 3 then i found answer
        map<int,int>myMap;
        vector<int> arr(2);
        
        //0(n)
        for(int i=0;i<nums.size();i++)
            myMap[nums[i]]=i; //saving index to value in map
            // 2 equals 0; 7 equals 1...
        
        //0(n)
        for(int i=0;i<nums.size();i++){
            int comp = target - nums[i];
            // if 7 exsists and value 7 is not itself, found
            if(myMap[comp]&& myMap[comp]!=i){
                arr[0] = i; //index 
            arr[1] = myMap[comp];
            }
        }
        return arr;
    }
};

//https://www.youtube.com/watch?v=v1qXNTTGpyo&t=904s


