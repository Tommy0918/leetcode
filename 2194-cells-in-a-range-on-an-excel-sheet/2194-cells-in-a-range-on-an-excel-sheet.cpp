class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        int start_s = s[0], end_s = s[3];
        int start_num = int(s[1]) - 48, end_num = int(s[4]) - 48;
        for(char c = start_s;c <= end_s;c++){
            for(int i = start_num;i <= end_num;i++){
                string str = "";
                str += c;
                str += to_string(i);
                ans.push_back(str);
            }
        }
        return ans;
    }
};