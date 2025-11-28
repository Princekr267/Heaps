#include<iostream>
#include<string>
#include<queue>
using namespace std;
struct ComparePair{
    bool operator () (pair<string, int> &p1, pair<string, int> &p2){
        return p1.second < p2.second;
    }
};
int main(){
    priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair> pq;
    pq.push(make_pair("prince", 91));
    pq.push(make_pair("vansh", 41));
    pq.push(make_pair("lucky", 81));
    pq.push(make_pair("gaurav", 31));
    pq.push(make_pair("rajiv", 71));
    while(!pq.empty()){
        cout<<pq.top().first<<", "<<pq.top().second<<endl;
        pq.pop();
    }

    return 0;
}