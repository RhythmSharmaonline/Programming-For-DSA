#include <iostream>
using namespace std;

int main() {
    cout <<"Welcome To Cpp Basics!!"<<endl;
    int age;
    string name;
    cout<< "Enter Age: ";
    cin>> age;
    cin.ignore();
    getline(cin,name);
    cout <<"Age: "<<age;

    return 0;
}