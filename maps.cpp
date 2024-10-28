#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map <string, string> myDictionary;
    myDictionary.insert(pair <string,string>("ugali", "obokuma"));
    myDictionary.insert(pair <string,string>("banana", "ritoke"));
    myDictionary.insert(pair <string,string>("avacado", "avocadoh"));
    myDictionary.insert(pair <string,string>("skuma", "eskuma"));

for (auto pair : myDictionary){
    cout <<  pair.first << "  also known as  " + pair.second <<endl;

}

    cout<< "my name is elvis";
}