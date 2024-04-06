class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int start = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '(')
                start++;
            else if(s[i] == ')'){
                if(start == 0){
                    s.erase(i, 1);
                    i--;
                }
                else 
                    start--;
            }
        }
        for(int i = s.size() - 1;start > 0 && i >= 0;i--){
            if(s[i] == '('){
                s.erase(i, 1);
                start--;
            }
        }
        return s;
    }
};