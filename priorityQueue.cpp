#include<iostream>
#include<queue>
#include<vector>
#include<string>
using namespace std;
class Heap{
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);

        int childIdx=vec.size()-1;
        int parIdx=(childIdx-1)/2;
        while(parIdx >= 0 && vec[childIdx]>vec[parIdx]){  // max heap (for min heap: "vec[childIdx] < vec[parIdx]" )
            swap(vec[parIdx], vec[childIdx]);
            childIdx=parIdx;
            parIdx=(childIdx-1)/2;
        }
    }

    void heapify(int i){
        if(i>=vec.size()-1){
            return;
        }
        int l=2*i+1;
        int r=2*i+2;
        int maxIdx=i;
        if(l<vec.size() && vec[l]>vec[maxIdx])
            maxIdx=l;
        if(r<vec.size() && vec[r]>vec[maxIdx])
            maxIdx=r;
        swap(vec[i], vec[maxIdx]);
        if(maxIdx!=i)
            heapify(maxIdx);
    }
    void pop(){
        swap(vec[0], vec[vec.size()-1]);
        vec.pop_back();
        heapify(0);
    }
    
    int top(){
        return vec[0];
    }

    bool empty(){
        return vec.size()==0;
    }
};

class Student{
public:
    string name;
    int marks;
    Student(string name, int marks){
        this->name=name;
        this->marks=marks;
    }
    bool operator < (const Student &obj) const{
        return this->marks < obj.marks;
    }
};
int main(){
    priority_queue<int> pq;
    pq.push(3);
    pq.push(6);
    pq.push(10);
    pq.push(1);
    // cout<<pq.top()<<endl;
    cout<<"Priority Queue: ";
    while (!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    Heap heap;
    heap.push(3);
    heap.push(8);
    heap.push(5);
    while(!heap.empty()){
        cout<<"Top of heap(PQ): "<<heap.top()<<endl; 
        heap.pop();
    }
    
    priority_queue<Student> multiPQ;
    multiPQ.push(Student("Prince", 51));
    multiPQ.push(Student("vansh", 15));
    multiPQ.push(Student("lucky", 21));
    while(!multiPQ.empty()){
        cout<<"Top: "<<multiPQ.top().name<<", "<<multiPQ.top().marks<<endl;
        multiPQ.pop();
    }
    return 0;
}