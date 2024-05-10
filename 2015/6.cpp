#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

std::vector<string> split(string s){
    std::istringstream iss(s);
    std::vector<std::string> tokens;
    std::string token;
    while (std::getline(iss, token, ' ')) {
        if (!token.empty()) {
            tokens.push_back(token);
        }
    }
    return tokens;
}   
int main(){
    std::ifstream file("6.txt");
    std::string str; 
    int arr[1000][1000];
    vector<string> tmp;
    while (std::getline(file, str)){
        cout<<str<<endl;
        tmp=split(str);
        if(tmp.at(0)=="toggle"){
            string comm=",";
            int index = tmp.at(1).find(comm);
            int a=stoi(tmp.at(1).substr(0,index));
            int b=stoi(tmp.at(1).substr(index+1));
            int index2 = tmp.at(3).find(comm);
            int c=stoi(tmp.at(3).substr(0,index));
            int d=stoi(tmp.at(3).substr(index+1));
            for(int i=a;i<=c;i++){
                for(int j=b;i<=d;j++){
                    if(arr[i][j]==1) arr[i][j]=0;
                    else arr[i][j]=1;
                }
            }
        }
        else if(tmp.at(1)=="on"){
            string comm=",";
            int index = tmp.at(2).find(comm);
            int a=stoi(tmp.at(2).substr(0,index));
            int b=stoi(tmp.at(2).substr(index+1));
            int index2 = tmp.at(4).find(comm);
            int c=stoi(tmp.at(4).substr(0,index));
            int d=stoi(tmp.at(4).substr(index+1));
            for(int i=a;i<=c;i++){
                for(int j=b;i<=d;j++){
                    arr[i][j]=1;
                }
            }
        }
        else{
            string comm=",";
            int index = tmp.at(2).find(comm);
            int a=stoi(tmp.at(2).substr(0,index));
            int b=stoi(tmp.at(2).substr(index+1));
            int index2 = tmp.at(4).find(comm);
            int c=stoi(tmp.at(4).substr(0,index));
            int d=stoi(tmp.at(4).substr(index+1));
            for(int i=a;i<=c;i++){
                for(int j=b;i<=d;j++){
                    arr[i][j]=0;
                }
            }
        }
    }
    int count=0;
    for(int i=0;i<1000;i++){
        for(int j=0;i<1000;j++){
            if(arr[i][j]==1) count++;
        }
    }
    cout<<count<<endl;
    return 0;
}