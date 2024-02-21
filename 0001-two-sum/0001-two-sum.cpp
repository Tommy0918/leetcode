class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;
        for(int i = 0;i < nums.size();i++){
            if(table.find(target - nums[i]) == table.end()){
                table[nums[i]] = i;
            }
            else{
                return {table[target - nums[i]], i};
            }
        }
            return{};
    }
};