#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main(){
    std::ifstream file("8.txt");
    std::string str; 
    int sum=0;
    int vis=0;
    while (std::getline(file, str)){
        cout<<vis<<" "<<sum<<endl;
        //vis-=2;
        sum+=str.size();
        vis+=2;
        for(int i=0;i<str.size();i++){
            if(str.at(i)=='\\'){
                vis+=2;
                /*
                if(str.at(i+1)=='x') {
                    //i+=3;
                    vis++;
                }
                else{
                    //i+=1;
                    vis++;
                }
                */
                
            }
            else if(str.at(i)=='"') vis+=2;
            else vis++;
            
        }
    }
    cout<<vis<<" "<<sum<<endl;
    cout<<vis-sum<<endl;
    return 0;
}
    