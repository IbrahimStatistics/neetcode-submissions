class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        map<char, int> S;
        map<char, int> T;
        
        for(int i = 0; i < s.size(); i++) {
            if(S.find(s[i]) != S.end()) {
                S[s[i]]++;
            } else {
                S[s[i]] = 1;
            }
        }

        for(int i = 0; i < t.size(); i++) {
            if(T.find(t[i]) != T.end()) {
                T[t[i]]++;
            } else {
                T[t[i]] = 1;
            }
        }

        return (S == T);
    }
};