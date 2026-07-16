#include <iostream>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
using namespace std;

int main(){
  
   //max heap
   priority_queue<int>maxi;


   //min heap
   priority_queue<int, vector<int>, greater<int>> mini;

   maxi.push(5);
   maxi.push(1);
   maxi.push(7);
   maxi.push(4);
   maxi.push(3);

   int n = maxi.size();
   for(int i = 0; i<n; i++){
      cout<<maxi.top()<<" ";
      maxi.pop();
   }cout<<endl;







}
