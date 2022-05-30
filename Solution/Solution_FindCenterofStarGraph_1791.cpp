//O(1)/O(1)
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        int u1=edges[0][0];
        int u2=edges[1][0];
        
        int v1=edges[0][1];
        int v2=edges[1][1];
        
        if(u1==u2){
            return u1;
        }
        else if(u1==v2){
            return u1;
        }
        else if(v1==u2){
            return v1;
        }
        else{
            return v1;
        }
            
        
        
    }
};
