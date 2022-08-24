class Solution {
public:
    void insert(vector<int>& nums,int temp)
    {
        if(nums.size()==0 || nums[nums.size()-1]<=temp)
        {
            nums.push_back(temp);
            return;
        }
        int val = nums[nums.size()-1];
        nums.pop_back();
        insert(nums,temp);
        nums.push_back(val);
        
    }
    void sorti(vector<int>& nums){
        if(nums.size() == 1)
            return;
        int temp = nums[nums.size()-1];
        nums.pop_back();
        sorti(nums);
        insert(nums,temp);
        
    }
    
    vector<int> sortArray(vector<int>& nums) {
        sorti(nums);
        return nums;
    }
};