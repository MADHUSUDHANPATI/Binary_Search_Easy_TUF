#include<bits/stdc++.h>
using namespace std;

int Minimum_Sorted_Array(vector<int> &nums) {

    int ans = INT_MAX;
    int n = nums.size();
    int low =0;
    int high = n-1;
    while( low<=high) {

        if( nums[low]<= nums[high]) {
            ans = min( ans, nums[low]);
            break;
        }

        int mid = (low+high)/2;

        if( nums[low]<=nums[mid]){
             ans= min ( ans, nums[low]);
             low= mid+1;
        }
        else {
            ans = min( ans, nums[mid]);
            high = mid-1;
        }
    }
    return ans;
}
int main() {

    int n;
    cin>> n;

    vector<int> nums(n);

    for( int i=0;i<n;i++) {
        cin >> nums[i];
    }

    cout << Minimum_Sorted_Array( nums);
}