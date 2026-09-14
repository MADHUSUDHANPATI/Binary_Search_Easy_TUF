#include<iostream>
#include<vector>
using namespace std;

int Lower_Value( vector<int> & nums , int x) {   

    int n= nums.size();
    int low =0;
    int high = n-1;
    int ans = -1;

    while( low<= high) {

        int mid = low + (high-low)/2;

        if( nums[mid] == x) {
            ans = mid;
            high = mid-1;
        }
        else if( nums[mid] < x){
            low = mid+1;
        }
        else {
            high = mid -1;
        }
    }

    return ans;
}


int Upper_Value( vector<int> & nums , int x) {   

    int n= nums.size();
    int low =0;
    int high = n-1;
    int ans = -1;

    while( low<= high) {

        int mid = low + (high-low)/2;

        if( nums[mid] == x) {
            ans = mid;
            low = mid +1;
        }
        else if (nums[mid] < x) {
            low = mid+1;
        }
        else {
            high = mid -1;
        }
    }

    return ans;

}
int Count_Occurences( vector<int> & nums, int target) {

    int n = nums.size();
    int count =0;
    int lower = Lower_Value(nums, target);
    if(lower == -1) {
        return count;
    }

    int upper = Upper_Value(nums, target);
    count = upper - lower +1;
    return count;
}
int main() {

    int n, target;
    cin>> n >> target; 
    vector<int> nums(n);

    for( int i=0;i< n; i++) {
        cin >> nums[i];
    }

    cout << Count_Occurences(nums, target);
    

}