class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        
        int n = points.size();
        int result = 0;
        if(points.size() <= 2){
            return points.size();

        }
        
        for(int i=0;i<n;i++){
            
            unordered_map<double,int> mp;
            int duplicates = 0;
            double slope = 0.0;
            
            for(int j=0;j<n;j++){
                
                int x1 = points[i][0];
                int x2 = points[j][0];
                int y1 = points[i][1];
                int y2 = points[j][1];
                
                int numer = y2-y1;
                int denom = x2-x1;
                
                if(numer == 0 && denom == 0){
                    duplicates++;
                    continue;
                }
                
                if(numer!=0){
                    slope = numer*1.0/denom;
                }
                else{
                    slope = INT_MAX;
                }
                mp[slope]++;
            }
            
            if(mp.size() == 0){
                result = duplicates;
            }
            else{
                
                for(auto slope:mp){
                    
                    result = max(result, slope.second + duplicates);
                }
            }
        }
        
        return result;
        
    }
};