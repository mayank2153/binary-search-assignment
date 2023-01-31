class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size();
        int mid;
        while(low<high){
            mid = (high+low)/2 ;
            if(nums[mid]==target){
                cout<<mid<<endl;
                return mid;
            }
            else if(nums[mid]<target){
                low = mid +1;
            }
            else 
                high = mid;
        }
        //cout<<mid<<endl;
        return -1;
       
        
    }
};
