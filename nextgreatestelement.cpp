#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int i;
    stack<int>st;
    vector<int>arr={6,8,0,1,3};
     int n=arr.size();
    vector<int>ans(n);
    for(i=n-1;i>=0;i--){
      while(!st.empty()&&st.top()<=arr[i]){
        st.pop();
      }
      if(st.empty()){
        ans[i]=-1;
      }
      else {
        ans[i]=st.top();
      }
      st.push(arr[i]);
    }
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
