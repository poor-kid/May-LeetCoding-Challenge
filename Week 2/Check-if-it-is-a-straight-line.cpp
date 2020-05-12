class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int num_points = coordinates.size();
        
        if(num_points == 2)
            return true;
        
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        
        
        
        for(vector<int> point : coordinates)
        {
            int dx = (x2 - x1);
            int dy = (y2-y1);
            if(dy*(point[0]- x1) != dx *(point[1]-y1))
                return false;
        }
        return true;
        
    }
};