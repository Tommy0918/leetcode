class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int> ans;
        for(auto i = 0;i < n;i++){
            if(words[i].find(x) != string::npos){ // string::npos means if it cant find the char it will return npos
                ans.push_back(i);
            }
        }
        return ans;
    }
};