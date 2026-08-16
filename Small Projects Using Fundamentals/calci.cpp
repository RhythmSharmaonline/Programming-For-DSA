#include <iostream>
using namespace std;

void welcome(){
    cout<< "-----Welcome To our Calculator Services-----";
    cout<< "<--Choose Your Preference-->";
    cout<< "1.Addition";
    cout<< "2.Substraction";
    cout<< "3.Multiplication";
    cout<< "4.Division";
}

//Addition
int add(int n1,int n2){
    return n1+n2;
}

//Substraction
int subs(int n1,int n2){
    if (n1>n2){
        return n1-n2;
    }
    else if(n2>n1){
        return n2-n1;
    }
    else if (n1==n2){
        return 0;
    }
    else {
        cout<< "Enter Valid Input";
    }
}

//Multiplication


int main() {
    int n1;
    int n2;
    char op ;
    cout<< "Enter First Number: "<<endl;
    cin >> n1;
    cout <<"Enter Second Number: "<<endl;
    cin >>n2;
    cout<<"Enter Operator: ";
    cin>>op;
    return 0;
}