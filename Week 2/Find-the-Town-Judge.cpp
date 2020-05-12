/* Take an array and increse the trust count if someone is trusting i and decrease the trust count if 
   i is trusting someone. At the check if ith index has value N-1 i.e every one except himseld has trusted i */


class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trusts(N+1,0);
        for(auto t : trust)
        {
            trusts[t[0]]--;
            trusts[t[1]]++;
        }
        
        for(int i=1;i<=N;i++)
        {
            if(trusts[i] == N-1)
                return i;
        }
        return -1;
        
        
    }
};