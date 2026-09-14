 #include<iostream>
 #include<vector>
 using namespace std;

 int BS( vector<int> &nums, int low, int high, int target) {

    int n = nums.size();
    if( low> high) return -1;

    int mid = low + (high-low)/2;

    if( nums[mid]==target) return mid;
 
    else if( nums[mid] > target) return BS(nums, low, mid-1, target);

    else return BS(nums, mid+1, high, target);
 }
 int Binary_Search( vector<int> & nums, int target) {

    int n = nums.size();
    return BS( nums, 0, n-1, target);
    
 }
 int main() {

    int n;
    int target;
    cin >> n >> target;
    vector<int> nums(n);
    for(int i=0; i< n ; i++) {
        
        cin >> nums[i];
    }

    cout<< Binary_Search( nums, target);
 }