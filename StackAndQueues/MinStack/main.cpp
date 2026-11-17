#include<bits/stdc++.h>
using namespace std;

class MinStack{
    private:
    stack<pair<int,int>>s;
    public:
    MinStack(){};
    void push(int x){
        if(s.empty()) s.push({x,x});
        else{
            if(x<s.top().second) s.push({x,x});
            else s.push({x,s.top().second});
        }
    }
    void pop(){
        s.pop();
    }
    int top(){
        return s.top().first;
    }
    int getMin(){
        return s.top().second;
    }
};

int main(){
    MinStack* obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    cout<<obj->getMin()<<endl;
    obj->pop();
    cout<<obj->top()<<endl;
    cout<<obj->getMin()<<endl;
}