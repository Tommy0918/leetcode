class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return 0;
        if(x == 0) return 1;
        int ans = 0;
        string b, c;
        c = b = std::to_string(x);
        reverse(b.begin(), b.end());
        if (b == c)
            ans = 1;
        else
            ans = 0;
        if(ans == 0)
            return 0;
        else 
            return 1;
    }
};