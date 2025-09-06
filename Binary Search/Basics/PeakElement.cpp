#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[nums.size()-1]>nums[nums.size()-2]){
            return nums.size()-1;
        }
        int lb=1,ub=nums.size()-2;
        while(lb<=ub){
            int mid=(lb+ub)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]<nums[mid+1]){
                lb=mid+1;
            }
            else if(nums[mid]<nums[mid-1]){
                ub=mid-1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    nums.resize(n);
    cout << "Enter elements: ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int peakIndex = sol.findPeakElement(nums);
    cout << "Peak element index: " << peakIndex << endl;
    cout << "Peak element value: " << nums[peakIndex] << endl;
    return 0;
}
