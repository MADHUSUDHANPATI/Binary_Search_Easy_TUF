#include<iostream>
#include<vector>
using namespace std;

vector<int> First_last_Occurence( vector<int> & nums, int target) {

    vector<int> temp;
    int first =-1;
    int last =-1;
    int n = nums.size();
    for( int i =0;i< n; i++) {
        if( nums[i] == target) {
            if(first ==-1) {
                first =i;
            }
            last =i;
        }
    }

    temp.push_back(first);
    temp.push_back(last);
    return temp;
}
int main() {

    int n, target;
    cin>> n >> target; 
    vector<int> nums(n);

    for( int i=0;i< n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = First_last_Occurence(nums, target);
    for( auto it : ans) {
        cout << it << " ";
    }

}