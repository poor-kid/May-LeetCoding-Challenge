class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map(26);
        for(char c : magazine)
        {
            map[c]++;
        }
        
        for(char x : ransomNote)
        {
            if(--map[x] < 0)
            {
                return false;
            }
           
        }
        return true;
        
    }
};