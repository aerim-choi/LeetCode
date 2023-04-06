//시간복잡도:O(N+1),공간복잡도:O(N)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]; //키 추가
        }
        int answer;
        for(int i=0;i<=nums.size();i++){
            if(!um.count(i)){
                answer=i;
            }
        }
        return answer;
    }
};
