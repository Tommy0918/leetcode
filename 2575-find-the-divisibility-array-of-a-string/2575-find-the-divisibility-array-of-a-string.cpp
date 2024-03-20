class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> ans(0);
        string str = "";
        for(int i  = 0;i < word.size();i++){
            str += word[i];
            stringstream ss;
            long long num;
            ss << str;
            ss >> num;
            if (num % m == 0) str = "";
            else str = to_string(num % m);
            ans.push_back(!(num % m));
        }
        return ans;
    }
};