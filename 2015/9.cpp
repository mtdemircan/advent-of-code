#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
using namespace std;
int mini=10000000;
int recur(map<string,int>&,int k,vector<string> v,map<string,int>& visited,int sum,string prev){
    for(int i=0;i<v.size();i++){
        if(visited.at(v.at(i))==0) {
            if(k==v.size()) mini=min(mini,sum+)
        }
    }
}
int main(){
    std::ifstream file("9.txt");
    std::string str;
    map<string,int> map;
    std::map<string,int> vis;
    vector<string> vec;
    while (std::getline(file, str)){
        string first=str.substr(0,str.find(" "));
        string second=str.substr(str.find(" ")+4).substr(0,str.substr(str.find(" ")+4).find(" "));
        if(find(vec.begin(), vec.end(), first) == vec.end()){
            vec.push_back(first);
        }
        if(find(vec.begin(), vec.end(), second) == vec.end()){
            vec.push_back(second);
        }
        int val=stoi(str.substr(str.find("=")+2));
        map[first+second]=val;
        map[second+first]=val;
    }

    return 0;
}