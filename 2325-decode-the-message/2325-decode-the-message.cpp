class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> m;
        int i = 0;
        for(auto a : key){
            if(i == 26)
                break;
            if(a == ' ')
                continue;
            if(m.empty() == true or m.find(a) == m.end())
                m.insert({a, char('a'+i++)});
        }
        for (int i = 0;i < message.size();i++){
            if(message[i] == ' ')
                continue;
            message[i] = m[message[i]];
        }
        return message;
    }
};