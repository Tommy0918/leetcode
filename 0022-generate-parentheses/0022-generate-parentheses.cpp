class Solution {
private: 
    void ger(string op, int open, int close, vector<string> &ans){
        if(open == 0 && close == 0){
            ans.push_back(op);
            return;
        }
        else if (open == close){
            string optemp = op;
            optemp.push_back('(');
            ger(optemp,open - 1,close,ans);
        }
        else if(open == 0){
            string optemp = op;
            optemp.push_back(')');
            ger(optemp,open,close - 1,ans);
        }
        else if(close == 0){
            string optemp = op;
            optemp.push_back('(');
            ger(optemp,open - 1,close,ans);
        }
        else{
            string op1 = op;
            string op2 = op;
            op1.push_back('(');
            op2.push_back(')');
            ger(op1,open - 1,close,ans);
            ger(op2,open,close - 1,ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        vector<string> ans;
        string op = "";
        ger(op,open,close,ans);
        return ans;
    }
};