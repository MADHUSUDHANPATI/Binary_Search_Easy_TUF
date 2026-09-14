#include<iostream>
#include<vector>
using namespace std;

int Search_Sorted( vector<int> &nums, int target) {

    int n= nums.size();
    int low =0;
    int high =n-1;
    while( low<=high) {

        int mid = (low+high)/2;
        if( nums[mid] == target) return mid;

        if(nums[low]==nums[mid] && nums[mid]==nums[high]) {
            low++;
            high--;
            continue;
        }
        if( nums[low] <= nums[mid]){
            if(nums[low] <= target && target<= nums[mid]) {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        else {
            if(nums[mid] <=target && target<=nums[high]) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
    }
    return -1;
}
int main() {

    int n,target;
    cin >> n>> target;
    vector<int>nums(n);
    for( int i=0;i<n;i++) {
        cin >> nums[i];
    }

    cout << Search_Sorted(nums, target);

}