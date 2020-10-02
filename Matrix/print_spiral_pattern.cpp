// { Driver Code Starts


#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends




class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> v;
        int top = 0, right = c-1, bottom = r-1, left = 0;
        while(top<=bottom && left<=right){
		    //print top row
    		for(int i=left;i<=right;i++){
    			v.push_back(matrix[top][i]);
    		}
    		top++;
    		
            //right column
    		for(int i=top;i<=bottom;i++){
    			v.push_back(matrix[i][right]);
    		}
    		right--;
    
    		//bottom row
    		if(top<=bottom){
    			for(int i = right;i>=left;i--){
    				v.push_back(matrix[bottom][i]);
    			}
    			bottom--;
    		}
    
    		//left column
    		if(left <=right){
    			for(int i=bottom;i>=top;i--){
    				v.push_back(matrix[i][left]);
    			}
    			
    			left++;
    		}
        }	
		
		return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends