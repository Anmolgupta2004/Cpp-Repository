#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
   // whenever we transfer the data from 1 track to other, it get reversed
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    st.pop();
   cout<<st.empty()<<endl;;
    cout<<st.top()<<endl;
    cout<<st.top()<<endl;
    return 0;
}