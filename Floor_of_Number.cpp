#include<iostream>
#include<vector>
using namespace std;

int Floor_of_Number( vector<int> & nums , int x) {   

    int n= nums.size();
    int low =0;
    int high = n-1;
    int ans = n;

    while( low<= high) {

        int mid = low + (high-low)/2;

        if( nums[mid] <=x) {
            ans = nums[mid];
            low = mid+1;
        }
        else {
            high = mid-1;
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

    cout<< Floor_of_Number( nums, target);
}