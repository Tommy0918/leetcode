class Solution {
public:
    int maximum69Number (int num) {
        int ans = 0;
        string s = to_string(num);
        int n = s.size();
        for(int i = 0;i < n;i++){
            if(s[i] == '6'){
                s[i] = '9';
                break;
            }
        }
        return stoi(s);
    }
};