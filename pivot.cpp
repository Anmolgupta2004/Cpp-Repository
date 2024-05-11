#include <iostream>
#include <vector>
using namespace std;

int main(){
    int target;
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];

    cin>>target;
    for(int i=0,j=0;j<n-target;j++){
                nums.push_back(nums[i]);
        nums.erase(nums.begin());

    }
     for(int i=0;i<n;i++)
    cout<<nums[i]<<"  ";
    return 0;
}
