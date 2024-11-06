#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;



int main(){
    unordered_map<string,int> m ;
//insertion
pair<string,int>p=make_pair("babbar",3);
m.insert(p);

//2 
pair<string,int>p2("love",2);
m.insert(p2);

//3
m["mera"]=1;

//searching

cout<<m["mera"]<<endl;
cout<<m.at("babbar")<<endl;
cout<<m.at("unknownKey")<<endl;//key not found

cout<<m["unknownKey"]<<endl;//key create

    return 0;
}

//bucked Array
// <key,value>
// hash function 
// hash code 
// compression function 
// collision Handling 
// open hashing
// closed Addressing 
// load factor