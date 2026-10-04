#include <iostream>
using namespace std;
// This program prints the multiplication table of a number entered by the user, but if the product exceeds 50, it exits the loop using 'break' statement.
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int product;
    for(int i=1;i<=10;i++){
        product=n*i;
          if(product>50){
            break;
        }
        cout<<n<<" * "<<i<<" = "<<product<<endl;  
    }
    return 0;
}