#include <fstream>
#include <iostream>
#include <string>
using namespace std;
bool vowels(string s){
    int x=0;
    for(int i=0;i<s.size();i++){
        if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'|s.at(i)=='u')x++;
        if(x==3) return true;
    }
    return false;
}
bool dbl(string s){
    for(int i=1;i<s.size();i++){
        if(s.at(i)==s.at(i-1)) return true;
    }
    return false;
}
bool req(string s){
    for(int i=1;i<s.size();i++){
        if((s.at(i-1)=='a'&&s.at(i)=='b')||(s.at(i-1)=='c'&&s.at(i)=='d')||(s.at(i-1)=='p'&&s.at(i)=='q')||(s.at(i-1)=='x'&&s.at(i)=='y')) return false;
    }
    return true;
}
bool twice(string s){
    for(int i=0;i<s.size()-1;i++){
        char a=s.at(i);
        char b=s.at(i+1);
        for(int j=i+2;j<s.size()-1;j++){
            if(s.at(j)==a&&s.at(j+1)==b) return true;
        }
    }
    return false;
}
bool jump(string s){
    for(int i=2;i<s.size();i++){
        if(s.at(i)==s.at(i-2)) return true;
    }
    return false;
}
int main(){
    std::ifstream file("5.txt");
    std::string str; 
    int count=0;
    while (std::getline(file, str)){
        if(jump(str)&&twice(str)) count++;
    }
    cout<<count;
    return 0;
}
