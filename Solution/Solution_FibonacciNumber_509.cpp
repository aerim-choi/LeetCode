//동적프로그래밍 
//O(N)/O(N)
class Solution {
public:
    int fib(int n) {
        int fibArr[31];
        fibArr[0] = 0;
        fibArr[1] = 1;
        for(int i = 2; i <= n; i++){
                fibArr[i] = fibArr[i-1] + fibArr[i-2];
        }
        return fibArr[n]; 
    }
};
