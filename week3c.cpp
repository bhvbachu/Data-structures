#include<iostream>
#include<map>
using namespace std;
int main(){
map<string,string>student;
student["CM"]="Bhavya";
student["CU"]="Janani";
student["CW"]="Kanishka";
cout<<"\nStudent details:\n";
for(auto it=student.begin();it!=student.end();it++){
    cout<<"ID: "<<it->first<<" Name: "<<it->second<<endl;
}
}