#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // declare map syntax :
    // unordered_map<key datatype,value datatype> name_of_map;
    unordered_map<int,string> mp;
    // insert data in Hash map
    mp[1]="hitesh";
    mp.insert({2,"mihir"});
    mp.insert({3,"nischay"});
    // access data in map 
    cout<<mp[1] <<endl;
    // search data in map
    if(mp.find(2)!= mp.end())
    {
        cout << "found";
    }
    cout << endl;
    // delete element in map
    // size and empty check
    cout<<"size= " <<mp.size() << endl;//give the size of map
    cout<< "is empty = "<<mp.empty() << endl;//desides whather  map is empty or not 
    mp.begin(); // give the refrrence of first element
    // mp.swap()// this function is use to swap valus between two maps 
    cout<<mp.erase(2) << "elements  deleted"<<endl;
   cout<<"bucket count = "<< mp.bucket_count() <<endl;
}