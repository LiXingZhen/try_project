class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //暴力求解
        // for(int i = 0; i < nums.size()-1;++i)
        // {
        //     for(int j = i + 1; j < nums.size();++j)
        //     {
        //         if(nums[i] + nums[j] == target)
        //         {
        //             return vector{i,j};
        //         }
        //     }
        // }
        // return {};
        //

        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return {it->second, i};
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
};
