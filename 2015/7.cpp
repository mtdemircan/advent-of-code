#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

int circuit(map<string,string>& map,string key){

    string s=map.at(key);  
    string first=s.substr(0,s.find(" "));
    string second=s.substr(s.find(" ")+1);
    cout<<first<<endl;
    cout<<second<<endl;
    cout<<first.size()<<endl;
    if(first=="NOT"){
        return ~circuit(map,second.substr(0,second.size()-1));
    }
    else if(second==""){
        cout<<"dfwdasD"<<endl;
        char x=first[0];
        int x2=x-'0';
        if(x2<10&&x2>-1)
            return stoi(first);
        else return circuit(map,first);
    }
    else{
        string third=second.substr(second.find(" ")+1);
        third=third.substr(0,third.size()-1);
        second=second.substr(0,second.find(" "));
        if(second=="AND"){
            char x=first[0];
            int x2=x-'0';
            if(x2<10&&x2>-1) return stoi(first)&circuit(map,third);
            else return circuit(map,first)&circuit(map,third);
        }
        else if(second=="OR"){
            
            return circuit(map,first)|circuit(map,third);
        }
        else if(second=="LSHIFT"){
            return circuit(map,first)<<stoi(third);
        }
        else if(second=="RSHIFT"){
            return circuit(map,first)>>stoi(third);
        }
    }
    return 0;
}
int main(){
    map<string,string> map;
    std::ifstream file("7.txt");
    std::string str; 
    while (std::getline(file, str)){
        map[str.substr(str.find_last_of(" ")+1)]=str.substr(0,str.find("-"));
    }
    map["1"]="1";
    cout<<circuit(map,"a")<<endl;
    return 0;
}