#include <iostream>
using namespace std;
// This program demonstrates the use of the 'continue' statement in a loop.
int main(){
    for(int i=1;i<10;i++){
        if(i==3){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}