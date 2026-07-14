#include <iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;
    cout<<"The size is "<<v.size()<<endl;
    cout<<"The size is "<<v.capacity()<<endl;

    v.push_back(11);   
    v.push_back(13);  
    v.push_back(14);
    v.push_back(32);
    cout<<"The capacity is "<<v.capacity()<<endl;
    cout<<"The size is "<<v.size()<<endl;

    cout<<"before pop "<<endl;

    for(int i = 0 ; i< v.size(); i++){
        cout<<v[i]<<endl;
    }
     
    cout<<"after pop: "<<endl;
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    

    vector<int> a(5,2);

    for (int i : a)
    {
        cout<<i<<endl;
    }



}
