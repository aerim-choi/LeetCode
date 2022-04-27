//O(N)/O(1)

class Solution {
public:
	int findTheWinner(int n, int k) {
		queue<int> que;
		for (int i = 1; i <= n; i++) {  //1~n까지 원소삽입
			que.push(i);
		}
		
		while (que.size() != 1) {
			for (int i = 1; i < k; i++) {
				que.push(que.front());
				que.pop();
			}
			que.pop();
			
		}
		
		return que.front();
	}
};
