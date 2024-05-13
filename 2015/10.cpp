#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    string s="1113222113",tmp="1113222113";
    int count=0,val=0;
    for(int i=0;i<51;i++){
        s=tmp;
        tmp="";
        //cout<<s<<endl;
        for(int j=0;j<s.size();){
            val=s.at(j)-'0';
            count=0;
            while(j<s.size()&&val==s.at(j)-'0'){
                count++;
                j++;
            }
            tmp+=to_string(count);
            tmp+=to_string(val);
        }
    }
    cout<<s.size()<<endl;
    return 0;
}