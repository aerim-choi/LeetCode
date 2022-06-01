//O(N)/O(N)
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(trust.empty() && n==1){
            return 1;  //타운에 판사만 있는 경우(믿는 사람없음, 사람은 판사한명)
        }
        
        vector<int> out(n+1,0); //out-degree는 한 정점에서 나가는 간선의 수
        vector<int> in(n+1,0);  //in- degree는 한 정점에서 들어오는 간선의 수
        
        for(auto edge:trust){
            out[edge[0]]++; //지목한 횟수
            in[edge[1]]++;  //지목 당한 횟수
        }
        
        for(int i=0;i<=n;i++){
            if(out[i]==0 && in[i]==n-1) //지목한 횟수=0 && 지목당한 횟수=town사람들-자기자신(1)
                return i; //판사
        }
        
        return -1;
        
    }
};
