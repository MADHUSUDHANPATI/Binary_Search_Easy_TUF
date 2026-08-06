#include<iostream>
#include<vector>
using namespace std;

int Lower_Bound( vector<int> & nums , int x) {   // nums[index] >= x ---> Lower bound

    int n= nums.size();
    int low =0;
    int high = n-1;
    int ans = n;

    while( low<= high) {

        int mid = low + (high-low)/2;

        if( nums[mid] == x) return mid;
        else if( nums[mid] > x) {
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

    cout<< Lower_Bound( nums, target);
}