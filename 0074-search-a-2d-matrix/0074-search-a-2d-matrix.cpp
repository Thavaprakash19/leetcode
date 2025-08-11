class Solution {
public:
    bool binarysearch(vector<int> &arr,int n,int k){
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==k){
                return true;
            }
            if(k>arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            if(binarysearch(matrix[i],n,target)){
                return true;
            }
        }
        return false;
    }
};