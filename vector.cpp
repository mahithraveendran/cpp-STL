
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> c){
    cout<<"Size of the vector: "<<c.size()<<endl;
    for(int i = 0; i < c.size();i++){
        cout<<c[i]<<endl;
    }
}
int main() {
    // Write C++ code here
    vector<int> v;
    int n;
    v.push_back(2);
    v.push_back(4);
    v.pop_back();
    print(v);
    cout<<"Enter the no. of elements in the vector:";
    cin>>n;
    cout<<"Enter the elements of the vector:";
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    return 0;
}