#include <iostream>
using namespace std;

//Preference Page
int welcome(){
    int choice;
    string menu = "-----Welcome To our Calculator Services-----\n"
        "<--Choose Your Preference-->\n"
        "1.Addition\n"
        "2.Substraction\n"
        "3.Multiplication\n"
        "4.Division\n"
        "Enter Your Preference: ";
    cout <<menu;
    cin>>choice;
    return choice;
}

//Input function
void inp(int &n1, int &n2){
    cout<<"Enter First Number: ";
    cin >> n1;
    cout<<"Enter Second Number: ";
    cin>> n2;
}

//Addition
int add(int n1,int n2){
    return n1+n2;
}

//Substraction
int subs(int n1,int n2){
    return n1-n2;
}

//Multiplication
int multi(int n1, int n2){
    return n1* n2;
}

//Division
int divi(int n1, int n2){
    if(n2 == 0){
        cout << "Can't divide by 0 ";
        return 0;
    }
    return n1/n2;
}

//MAIN Function
int main() {
    int choice = welcome();
    int a,b ;
    inp(a,b);
    switch(choice){
        case 1:
            add(a,b);
            
    }

    return 0;
}