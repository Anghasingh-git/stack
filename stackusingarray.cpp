#include<iostream>
#include<vector>
using namespace std;
class Stack{
    vector<int>v;
    public:
    void push(int x){
      v.push_back(x);
    }
    void pop(){
     v.pop_back();
    }
    int top(){
  return v[v.size()-1];
    }
    bool empty(){
       return v.size()==0;
    }
};
int main(){
    Stack s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    while(!s.empty()){
     cout<<s.top()<<" ";
     s.pop();
    }
    cout<<endl;
    return 0;
}
