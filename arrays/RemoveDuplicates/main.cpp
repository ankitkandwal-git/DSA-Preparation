#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>&nums){
    if(nums.empty()) return 0;
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]!=nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
}
int main(){
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int newLength = removeDuplicates(nums);
    cout << "New length: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newLength; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}