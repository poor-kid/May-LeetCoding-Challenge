class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> set(J.begin(),J.end());
        int jewels = 0;
        
        for(char x : S)
        {
            auto it = set.find(x);
            if(it != set.end())
                jewels++;
        }
        
        
        return jewels;
    }
};