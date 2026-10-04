#include <iostream>
using namespace std;
// This program demonstrates a simple calculator using switch-case statement and takes two numbers as input from the user.
int main() {
int a,b;
cout<<"Enter two numbers: ";
cin>>a>>b;
cout<<"--------"<<endl;
cout<<"1.Addition"<<endl;
cout<<"2.Subtraction"<<endl;
cout<<"3.Multiplication"<<endl;
cout<<"4.Division"<<endl;
cout<<"5.Exit"<<endl;
cout<<"--------"<<endl;
int choice;
cout<<"Enter your choice: ";
cin>>choice;
switch(choice){
    case 1:
        cout<<"Addition: "<<a+b<<endl;
        break;
    case 2:
        cout<<"Subtraction: "<<a-b<<endl;
        break;
    case 3:
        cout<<"Multiplication: "<<a*b<<endl;
        break;
    case 4:
        if(b!=0){
            cout<<"Division: "<<a/b<<endl;
        }else{
            cout<<"Error: Division by zero!"<<endl;
        }
        break;
    case 5:
        cout<<"Exiting the program."<<endl;
        break;
    default:
        cout<<"Invalid choice!"<<endl;
}
return 0;
}