class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        int G = 0;
        int P = 0;
        int M = 0;
        int take = 0;
        for(int i = 0;i < n;i++){
            for (int j = 0;j < garbage[i].size();j++){
                if(garbage[i][j] == 'M')
                    M = i;
                else if(garbage[i][j] == 'P')
                    P = i;
                else 
                    G = i;
                take++;
            }
        }
        for(int i = 1;i < travel.size();i++)
            travel[i] += travel[i - 1];
        take += (M > 0) ? travel[M - 1] : 0;
        take += (P > 0) ? travel[P - 1] : 0;
        take += (G > 0) ? travel[G - 1] : 0;

        return take;
    }
};