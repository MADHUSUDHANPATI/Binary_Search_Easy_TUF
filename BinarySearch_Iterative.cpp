 #include<iostream>
 #include<vector>
 using namespace std;

 int Binary_Search( vector<int> & nums, int low, int high, int target) {

    
    while( low<=high) {
        
        int mid = low + (high-low)/2;
        if( nums[mid] == target) {
            return mid;
        }
        else if( nums[mid] > target) {
            high = mid-1;
        }

        else {
            low = mid+1;
        }
    }

    return -1;
 }
 int main() {

    int n;
    int target;
    cin >> n >> target;
    vector<int> nums(n);
    for(int i=0; i< n ; i++) {
        
        cin >> nums[i];
    }

    cout<< Binary_Search( nums, 0, n-1, target);
 }