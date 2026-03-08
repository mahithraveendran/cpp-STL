#include <iostream>
#include <map>
using namespace std;
void print(map<int, string> &m){
    int s = m.size();
    cout<<s<<endl;
    for(auto &value : m){
        cout<<value.first<<" "<<value.second<<endl;
    }
}
int main()
{
    map<int, string> m;
    m[1] = "acd";
    m[2] = "def";
    m[3] = "bcd";
    m.insert({4,"mahith"});
    auto c = m.find(3);
    // cout<<c->first<<" "<<c->second;
    print(m);
    return 0;
}