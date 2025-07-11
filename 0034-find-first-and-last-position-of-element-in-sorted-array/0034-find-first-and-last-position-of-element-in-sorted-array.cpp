class Solution {
public:
    int findFirst(vector<int> &nums,int target){
        int ans = -1;
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                ans = mid;
                right = mid-1;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
    int findLast(vector<int> &nums,int target){
        int ans = -1;
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                ans = mid;
                left = mid+1;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums,target);
        int last = findLast(nums,target);
        cout<<(last-first)+1;
        return {first,last};
    }
};
