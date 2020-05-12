class Solution {
    
    void paintImage(vector<vector<int>> &image, int sr,int sc,int color,int newColor)
    {
        int rows = image.size();
        int cols = image[0].size();
        
        if(sr <0 || sc < 0 || sr >=rows || sc >= cols || image[sr][sc] != color)
            return;
        
        image[sr][sc] = newColor;
        vector<pair<int,int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};
        for(int i=0;i<4;i++)
            paintImage(image,sr+directions[i].first,sc+directions[i].second,color,newColor);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int rows = image.size();
        if(rows == 0)
            return image;
        int cols = image[0].size();
        
        if(image[sr][sc] == newColor)
            return image;
        
        int color = image[sr][sc];
        
        paintImage(image,sr,sc,color,newColor);
        return image;
        
    }
};


/* Using Visited Array */

class Solution {
    
    void paintImage(vector<vector<int>> &image,int sr, int sc, int color, int newColor,
                    vector<vector<bool>> &visited)
    {
        int rows = image.size();
        int cols = image[0].size();
        if(sr < 0 || sc < 0 || sr >= rows || sc >= cols || image[sr][sc] != color || visited[sr][sc])
            return;
        cout<<"row: "<<sr<<" col: "<<sc<<endl;
        image[sr][sc] = newColor;
        visited[sr][sc] = true;
        vector<pair<int,int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};
        
        for(int i=0;i<4;i++)
        {
            
            paintImage(image,sr+directions[i].first,sc+directions[i].second,color,newColor,visited);
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int rows = image.size();
        if(rows == 0)
            return image;
        int cols = image[0].size();
        vector<vector<bool>> visited(rows,vector<bool>(cols,false));
        int color = image[sr][sc];
        paintImage(image,sr,sc,color,newColor,visited);
        return image;    
    }
};