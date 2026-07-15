#include <iostream>
#include<vector>
#include<queue>
#include<deque>
using namespace std;

int main(){

   deque<int> d;
   d.push_front(45);
   d.push_back(2);
   //d.push_front(5);
   d.push_back(3);
   d.pop_front();
   // for(int i : d){
   //    cout<<i<<" ";
   // }
   
   //cout<<d.at(1);
   for(int i : d){
      cout<<i<<" "<<endl;
   }
   d[0] = 111;
   cout<<d.front()<<endl;
   

    



}
