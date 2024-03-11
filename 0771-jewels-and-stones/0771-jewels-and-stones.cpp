class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int hash[256] = {0};
        int cnt = 0;
        for(auto i = 0;i < stones.size();i++)
            hash[stones[i]]++;
        for(auto i  = 0;i < jewels.size();i++)
            cnt = cnt + hash[jewels[i]];
        return cnt;
    }
};