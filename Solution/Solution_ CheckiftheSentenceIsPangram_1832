//O(N+26)/O(N)
class Solution {
public:
    unordered_map<char,int> umap;
    bool checkIfPangram(string sentence) {
        for(char ch:sentence){
            umap[ch]++;
        }
        for(char ch = 'a';ch <= 'z'; ch++){
            if(!umap[ch])return false;
        }
        return true;
    }
};
