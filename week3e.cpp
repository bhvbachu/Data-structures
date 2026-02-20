#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int key;
    v.push_back(20);
    v.push_back(10);
    v.push_back(5);
    v.push_back(30);
    v.push_back(30);
    sort(v.begin(),v.end());
    cout<<"the elements in the vector are:";
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\nenter the element to find:";
    cin>>key;
    auto it=find(v.begin(),v.end(),key);
    if(it!=v.end()){
        cout<<"element found at position: "<<distance(v.begin(),it)<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    int c=count(v.begin(),v.end(),key);
   cout<<"\nthe count of "<<key<<"is:"<<c<<endl;
}