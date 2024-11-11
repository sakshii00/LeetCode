class Solution {
public:
    void dfs(int row, int col, vector<vector<int>> &visited, vector<vector<int>> &heights, int mark){
        if(visited[row][col]==mark){
            return;
        }
        else if(visited[row][col]==-1){
            visited[row][col]=mark;
        }
        else if(visited[row][col]!=mark && visited[row][col]!=-1){
            visited[row][col]=2;
        }
        
        vector<int> delRow={0,1,0,-1};
        vector<int> delCol={-1,0,1,0};
        
        for(int i=0;i<4;i++){
            int newRow=row+delRow[i];
            int newCol=col+delCol[i];
            if(newRow>=0 && newRow<heights.size() && newCol>=0 && newCol<heights[0].size()){
                
                if(visited[newRow][newCol]!=mark && visited[newRow][newCol]!=2 && heights[newRow][newCol]>=heights[row][col]){
                    dfs(newRow, newCol, visited, heights, mark);
                }
            }
        }
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        //corner ones
        //left top
        //bottom and right
        
        //dfs and a visited array
        //so for corner ones i will mark visited as 2
        
        
        int rows=heights.size();
        int cols=heights[0].size();
        
        vector<vector<int>> visited(rows, vector<int>(cols, -1));
        
        int pacific=1;
        int atlantic=0;
        //1 for top and and left
        for(int col=0;col<cols;col++){
            dfs(0, col, visited, heights, pacific);
            dfs(rows-1, col, visited, heights, atlantic);
        }
        for(int row=0;row<rows;row++){
            dfs(row, 0, visited, heights, pacific);
            dfs(row, cols-1, visited, heights, atlantic);
        }
        
        vector<vector<int>> ans;
        
        for(int i=0;i<visited.size();i++){
            for(int j=0;j<visited[0].size();j++){
                if(visited[i][j]==2){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
        
 
        
        
    }
};
