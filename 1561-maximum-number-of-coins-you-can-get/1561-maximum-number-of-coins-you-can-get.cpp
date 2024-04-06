class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans = 0;
        int n = piles.size();
        sort(piles.rbegin(),piles.rend());
        int k = n / 3 * 2;
        for(int i = 1;i < k;i += 2)
            ans += piles[i];
        return ans;
    }
};