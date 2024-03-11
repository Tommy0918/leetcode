class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(auto i : address){
            if(i == '.')
                ans.append("[.]");
            else 
                ans.push_back(i);
        }
        return ans;
    }
};