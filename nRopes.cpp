#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int connectRopes(vector<int> ropes){
    priority_queue<int, vector<int>, greater<int>> minPq(ropes.begin(), ropes.end());
    int amount=0;
    while(minPq.size()>1){
        int min_1=minPq.top();
        minPq.pop();
        int min_2=minPq.top();
        minPq.pop();
        amount+=min_1+min_2;
        minPq.push(min_1+min_2);
    }   
    return amount;
}
int main(){
    // priority_queue<int, vector<int>, greater<int>> minPq;
    // minPq.push(4);
    // minPq.push(3);
    // minPq.push(2);
    // minPq.push(6);
    // while(!minPq.empty()){
    //     cout<<minPq.top()<<" ";
    //     minPq.pop();
    // }
    vector<int> ropes={4, 3, 2, 6};
    cout<<connectRopes(ropes)<<endl;
    return 0;
}