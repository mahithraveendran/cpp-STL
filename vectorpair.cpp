#include <iostream>
#include <vector>
using namespace std;

void print(vector<pair<int,int>> c){
    cout<<"Size:"<<c.size()<<endl;
    for(int i = 0; i < c.size(); i++){
        cout<< c[i].first <<" "<<c[i].second <<endl;
    }
}

int main(){
    vector<pair<int,int>> v;
    int n;
    cout<<"Enter the no. of pairs:";
    cin>>n;
    cout<<"Enter the pairs:";
    for(int i = 0; i < 3; i++){
        int a, b;
        cin>>a>>b;
        v.push_back({a, b});
        cout<<"Enter the next pair:";
    }
    print(v);
}