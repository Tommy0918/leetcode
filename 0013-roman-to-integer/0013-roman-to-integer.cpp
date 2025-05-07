class Solution {
public:
    int chartest(char a){
        switch (a){
            case 'I' : return 1; break;
            case 'V' : return 5; break;
            case 'X' : return 10; break;
            case 'L' : return 50; break;
            case 'C' : return 100; break;
            case 'D' : return 500; break;
            case 'M' : return 1000; break;
            default : return 0; break;
        }
    }

    int romanToInt(string s) {
        int ans = 0;
        for (int i = 0;i < s.length();i++){
            if(i + 1 < s.length() && chartest(s[i]) < chartest(s[i + 1])){
                ans -= chartest(s[i]);
            }
            else {
                ans += chartest(s[i]);
            }
        }
        return ans;
    }
};