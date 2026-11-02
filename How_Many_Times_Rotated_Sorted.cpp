#include<iostream>
#include<vector>
using namespace std;

int How_Many_Times_Rotated_Sorted( vector<int> &nums) {

    int n = nums.size();
    int ans = INT_MAX;
    int low=0;
    int high=n-1;
    int index;
    while(low<=high) {

        int mid= (low+high)/2;

        if( nums[low]<=nums[high]) {

            if( nums[low] < ans) {
                ans = nums[low];
                index= low;
            }
            break;
        }
        if(nums[low]<=nums[mid]) {

            if(nums[low] <ans) {
                ans = nums[low];
                index = low;

            }
            low = mid+1;
        }
        else {

            if( nums[mid] < ans) {
                ans = nums[mid];
                index = mid;
            }
            high = mid-1;
        }

    }
    return index;
}
int main() {
    
    int n;
    cin>> n;

    vector<int> nums(n);
    for( int i=0;i<n;i++) {
        cin>> nums[i];
    }

    cout << How_Many_Times_Rotated_Sorted(nums);
}