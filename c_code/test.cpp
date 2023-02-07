#include<iostream>
#include<deque>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    for(auto iter=v.begin();iter!=v.end();++iter){
        cout<<*iter<<"   ";
    }
    cout<<endl;

}
