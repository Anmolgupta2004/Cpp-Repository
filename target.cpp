#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   int x;
   cout<<"Enter the size of array"<<endl;
   cin>>n;
   vector<int>arr(n);
   cout<<"Enter the elements of array"<<endl;
   int left=0;
   int right=n-1;
   while(left<right){
    if(arr[left]+arr[right]==x){
        bool flag=true;
    }else if(arr[left]+arr[right]<x){
        left++;
    }else{
        right--;
    }
   }
   bool flag=false;
   flag?cout<<"YES"<<endl:cout<<"NO"<<endl;

}
