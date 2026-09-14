#include<iostream>
#include<vector>
using namespace std;

int Upper_Bound( vector<int> & nums , int x) {   // nums[index] > x ---> Upper bound

    int n= nums.size();
    int low =0;
    int high = n-1;
    int ans = n;

    while( low<= high) {

        int mid = low + (high-low)/2;

        if( nums[mid] > x) {
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }

    return ans;

}
int main() {
    int n;
    int target;
    cin >> n >> target;
    vector<int> nums(n);
    for(int i=0; i< n ; i++) {
        
        cin >> nums[i];
    }

    cout<< Upper_Bound( nums, target);
}