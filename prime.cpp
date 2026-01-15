#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number "<<endl;
    cin>>num;
    int i = 2;

    while(i<num){
        if(num%i==0){
            cout<<"The number is not prime"<<endl;
            break;
        }
        i = i +1;
        if(i == num){
            cout<<"The number is Prime";
        }
        

    }
}