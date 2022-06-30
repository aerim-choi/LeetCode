//분할 정복법 풀이
//O(NlogN)/O(logN)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        return majorityElementRec(nums, 0 , nums.size()-1);
    }
    int majorityElementRec(vector<int>& nums,int lo,int hi){
        //벡터의 원소가 하나일때
        if(lo==hi) {return nums[lo];}
        
        int mid = (hi-lo) / 2 + lo; //원소 중간 인덱스 값
        int left = majorityElementRec(nums, lo, mid);
        int right = majorityElementRec(nums, mid+1, hi);
        
        //left와 right가 같다면 left를 majority로 한다.
        if(left == right) return left; 
        
        //left와 right가 다르다면 count해보고 결정한다.
        int leftCount = countInRange(nums,left, lo, hi);
        int rightCount = countInRange(nums,right, lo, hi);
        return leftCount > rightCount ? left : right;
    }
    int countInRange(vector<int>& nums, int num, int lo, int hi){
        int count=0;
        for(int i =lo; i<=hi; i++){
            if(nums[i]==num)count++;
        }
        return count;
    }
};
//해쉬맵 풀이
//O(N)/O(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int frequency= nums.size()/2;
        unordered_map<int,int> umap;
        
        for(int num:nums){
            umap[num]++;
        }
        
        for(pair<int,int> elem:umap){
           if(elem.second > frequency){
               return elem.first;
           } 
        }
        return -1;
    }
};
