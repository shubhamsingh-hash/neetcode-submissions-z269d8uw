class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int k=0;
        int m=matrix.size();
        if (matrix.empty() || matrix[0].empty()) return false;
        int n=matrix[0].size();
        int top=0;
        int bottom=m-1;
        int row=0;
        while(top<=bottom){
            int mid=(top+bottom)/2;
            if(target<matrix[mid][0]){
                bottom=mid-1;

            }
            else if(target> matrix[mid][n-1]){
                top=mid+1;
            }
            else{row=mid;
            break;}
        }
        int high=n-1;
        int low=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(matrix[row][mid]==target){
                return true;
            }
            else if(matrix[row][mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return false;

    
        
    }
};
