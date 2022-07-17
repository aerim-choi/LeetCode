//시간복잡도: O(R*C)
//공간복잡도: O(1)
class Solution {
public:

    int area(int r,int c,vector<vector<int>>& grid){
        //방문하지 않음
        //행,열값이 주어진 grid보다 크거나 작을경우, 섬이 아닌 경우(또는 방문했을 경우)
        if(r<0|| r>=grid.size()||c<0 ||c>=grid[0].size()||grid[r][c]==0)
            return 0;
        
        grid[r][c] = 0; //방문표시
        
        //   현재위치+오른쪽+왼쪽+위+아래
        return (1+area(r+1,c,grid)+area(r-1,c,grid)+area(r,c-1,grid)+area(r,c+1,grid));
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int ans=0;
        
        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[0].size();c++){
                ans=max(ans,area(r,c,grid)); 
            }
        }
        return ans;
    }
};
