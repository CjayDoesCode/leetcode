class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> st;
        unordered_map<char, char> ts;
        for (int i = 0; i < s.size(); ++i) {
            if ((st.contains(s[i]) && st[s[i]] != t[i]) ||
                (ts.contains(t[i]) && ts[t[i]] != s[i]))
                return false;
            st[s[i]] = t[i];
            ts[t[i]] = s[i];
        }
        return true;
    }
};
