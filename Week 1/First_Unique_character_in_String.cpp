
/* store the frequency of each character and iterate through each char : check(freq[char] == 1) */
class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.length();
        unordered_map<char,int> freq;
        
        for(int i=0;i<len;i++)
        {
            freq[s[i]]++;
        }
        
        for(int i=0;i<len;i++)
        {
            if(freq[s[i]] == 1)
                return i;
        }
        return -1;
    }
};