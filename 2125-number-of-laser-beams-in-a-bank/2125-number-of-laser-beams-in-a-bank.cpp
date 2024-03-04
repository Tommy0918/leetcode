class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, tmp = 0;
        int n = bank.size();
        for(auto row : bank){
            int device = count(row.begin(),row.end(),'1');
            if(device > 0){
                ans += device * tmp;
                tmp = device;
            }
        }
        return ans;
    }
};