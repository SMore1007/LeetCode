class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;
        int len = nums.size();
        
        for(auto i = nums.begin(); i != nums.end(); ++i)
        {
            auto it2 = find(i+1, nums.end(), target - *i);
            if(it2 != nums.end()) // found the number
            {
                result.push_back(i - nums.begin());
                result.push_back(it2 - nums.begin());
                break;
            }
           
        }
        return result;
    }
};