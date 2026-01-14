#include<iostream>
using namespace std;

//Brute Force Method
/*
int main(){
    int num;
    cin>>num;
    if(num > 0){
        cout<<"Number is positive";
    }
    else if(num < 0){
        cout<<"Number is negative";
    }
    else{
        cout<<"It is Zero";
    }
} 
    

// Using Nested if-else Statements

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num>=0){
        if(num == 0){
            cout<<"The number is Zero";
        }
        else if(num > 0){
            cout<<"The number is Positive";
        }
    }
    else{
        cout<<"The number is negative";
    }


}
    */

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num == 0)
        cout<<"Zero"; else (num > 0) ? cout <<"Positive": cout <<"Negative";

}
