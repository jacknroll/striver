//maps stores element in key value pairs
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>people={{"jon",32},{"bon",38},{"son",43}};
    cout<<people["jon"]<<endl;
    cout<<people.at("jon")<<endl;
    cout<<people["son"]<<endl;

    people["son"]=45;
    cout<<people["son"]<<endl;

    people["kon"]=100;
    cout<<people["kon"]<<endl;
    people.insert({"DON",999});
    cout<<people["DON"]<<endl;
    

    //erase element
    cout<<people.at("son")<<endl;
    people.erase("son");
    // cout<<people.at("son")<<endl;

    //if empty
    cout<<people.empty()<<endl;

    //if any element exists
    cout<<people.count("son")<<endl;
    cout<<people.count("bon")<<endl;


    //looping through the map
    for(auto person:people){
        cout<<person.first<<" is "<<person.second<<endl;
    }
    

}