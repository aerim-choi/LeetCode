class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int slen = s.length();
        int plen = p.length();

        if (slen < plen)return {};

        vector<int> pv(26, 0), sv(26, 0), res;

        for (int k = 0; k < plen; k++) {
            pv[p[k] - 'a']++;
        }

        int i = 0, j = 0;

        while (j < slen) {
            sv[s[j] - 'a']++;

            if ((j - i + 1) < plen) {
                j++;
            }

            else if ((j - i + 1) == plen) {
                if (pv == sv)
                    res.push_back(i);
                
                sv[s[i] - 'a']--;
                i++;
                j++;
            }
        }
        return res;
    }
    
};

int main() {
    Solution s;
    for (int i : s.findAnagrams("cbaebabacd", "abc")) {
        cout << i << " ";
    }
}
