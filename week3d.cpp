#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
     cout<<"the elements in the set are:";
for(auto x:s){
    cout<<x<<" ";
}
}