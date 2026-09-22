#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int i,n;
    cout<<"enter thr size"<<endl;
    cin>>n;
    vector<int>ans(n);
    stack<int>st;
    vector<int> arr(n);
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        while(!st.empty()&&arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=i+1;
        }
        else{
           ans[i]=i-st.top();
        }
        st.push(i);
    }
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}