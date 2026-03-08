#include <iostream>
#include<utility>
using namespace std;

int main() {
    // Write C++ code here
    pair<int,string> p;
    // p = make_pair(1,"abc");
    p = {2,"abcd"};
    cout << p.first << " " <<p.second<< endl;
    
    pair<int,int> p_arr[3];
    p_arr[0] = {1,4};
    p_arr[1] = {2,5};
    p_arr[2] = {3,6};
    for(int i = 0; i < 3; i++){
        cout<<p_arr[i].first<< " "<< p_arr[i].second << endl;
    }
    return 0;
}