#include <iostream>
using namespace std;
// This program calculates the factorial of a number entered by the user using a 'while' loop.
int main(){
    int n;
    int product=1;
    cout<<"Enter a number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        product=product*i;
        i++;
    }
    cout<<"Factorial of "<<n<<" is: "<<product<<endl;
    return 0;
}

