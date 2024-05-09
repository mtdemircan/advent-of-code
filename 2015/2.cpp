#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main() 
{ 
    std::ifstream file("2.txt");
    std::string str,tmp; 
    int a,b,c,i;
    int sum=0;
    while (std::getline(file, str))
    {
    
        i=0;
        while(i<str.size()&&str.at(i)!='x')
            tmp+=str.at(i++);
        i++;
        
        a=stoi(tmp);
        tmp="";
        while(i<str.size()&&str.at(i)!='x')
            tmp+=str.at(i++);
        i++;
        
        b=stoi(tmp);
        tmp="";
        while(i<str.size()&&str.at(i)!='x')
            tmp+=str.at(i++);
        
        c=stoi(tmp);

        tmp="";
        int a1=a+b;
        int a2=a+c;
        int a3=b+c;
        int m=min(min(a+b,b+c),a+c);
        sum+=(a*b*c)+2*m;
        std::cout<<sum<<endl;
        
        
    }
    std::cout<<sum<<endl;
}