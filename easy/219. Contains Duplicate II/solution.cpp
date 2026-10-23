class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (k == 0 || nums.size() == 1)
            return false;

        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); ++i) {

            if (map.contains(nums[i]) && i - map[nums[i]] <= k)
                return true;

            map[nums[i]] = i;
        }

        return false;
    }
};
