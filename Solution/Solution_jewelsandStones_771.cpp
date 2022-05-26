//시간복잡도 O(N+M)/공간복잡도 O(N)
class Solution {
public:
    unordered_map<char, int> umap;
    int numJewelsInStones(string jewels, string stones) {
       for (char c : stones) { //O(N) == O(stones 문자열 길이)
			umap[c]++; 
		}
		int count = 0;
		for (char c : jewels) { //O(M) == O(jewels 문자열길이)
			if (umap.count(c)) { //맵에서 key에 해당하는 원소가 있으면 return 1, 없으면 return 0
				count += umap[c];
			}
		}
		return count;
	}
};
