#include <iostream>
using namespace std;
// This program checks whether a number is prime or not using 'break' statement.
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<n;i++){
       if(n%i==0){
           cout<<n<<" is not prime number."<<endl;
           break;
       }else{
           cout<<n<<" is prime number."<<endl;
           break;
       }
    }
    return 0;
}