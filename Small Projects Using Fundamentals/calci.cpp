#include <iostream>
using namespace std;

//Preference Page
int welcome(){
    int choice;
    string menu = "-----Welcome To our Calculator Services-----\n \n"
        "=====Calculator=====\n"
        "<---Choose Your Preference--->\n"
        "1.Addition\n"
        "2.Substraction\n"
        "3.Multiplication\n"
        "4.Division\n"
        "5.Exit\n"
        "Enter Your Preference: ";
    cout<<menu;
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
float divi(int n1, int n2){
    if(n2 == 0){
        cout << "Can't divide by 0 ";
        return 0;
    }
    return float(n1/n2);
}

//MAIN Function
int main() {
    int a,b ;
    inp(a,b);
    while(true){
        int choice = welcome();
        switch(choice){
            case 1:
                cout<<"Result= "<< add(a,b);
                break;
            case 2: 
                cout<<"Result= "<< subs(a,b);
                break;
            case 3:
                cout<<"Result= "<< multi(a,b);
                break;
            case 4:
                cout<<"Result= "<< divi(a,b);
                break;
            case 5:
                cout<<"-----Thank You For Using our Services----";
                return 0;
            default:
                cout <<"Invalid Choice";
                break;

                
        }
}

    return 0;
}