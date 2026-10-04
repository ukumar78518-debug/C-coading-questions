#include <iostream>
using namespace std;
// This program demonstrates the use of the 'switch' statement to print a message based on the number entered by the user.
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    switch(n){
        case 1:
            cout<<"You entered One."<<endl;
            break;
        case 2:
            cout<<"You entered Two."<<endl;
            break;
        case 3:
            cout<<"You entered Three."<<endl;
            break;
        case 4:
            cout<<"You entered Four."<<endl;
            break;
        case 5:
            cout<<"You entered Five."<<endl;
            break;
        default:
            cout<<"You entered a number other than 1,2,3,4,5."<<endl;
    }
    return 0;
}