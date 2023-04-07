//시간복잡도 : O(N) for문을 i=0에서 N-9전 까지 돌기 때문에 O(N-9)이다.=>O(N)
//공간복잡도 : O(N) for문을 i=0에서 N-9전 까지 돌기 때문에 O(N-9)번 key와 value를 삽입한다. =>O(N)
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> answer;
        unordered_map<string,int> um; 

        if(s.length()<10){
            return answer;
        }
    
        for(int i=0;i<s.length()-9;i++){   //O(N-9)=>O(N)
            string str=s.substr(i,10);
            cout<<str<<endl;
             if(um[str]==1){ //충돌 발생
                answer.push_back(str);
            }
            um[str]++;
        }
        return answer;
    }
}
