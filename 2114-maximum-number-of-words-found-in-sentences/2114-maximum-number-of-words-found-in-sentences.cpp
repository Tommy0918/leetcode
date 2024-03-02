class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int max_n = 0;
        for(auto i = 0;i < n;i++){
            int tmp = 1;
            for(auto j = 0;j < sentences[i].size();j++){
                if(sentences[i][j] == ' ')
                    tmp++;
            }
            max_n = max(max_n, tmp);
        }
        return max_n;
    }
};