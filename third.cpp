#include <iostream>
using namespace std;
//We are founding specific number in the loop and we are using 'break' statement to exit the loop when we find that number.
int main(){
    for(int i=1;i<50;i++){
        if(i==37){
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}