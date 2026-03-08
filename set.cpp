 #include <iostream>
 #include <set>
 using namespace std;
 int main(){
     set<string> s={"abc","def","cfg","abc","cfg"};
     s.insert("hij");
     for(auto v: s){
         cout<<v<<endl;
     }
     
 }