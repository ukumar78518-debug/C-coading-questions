#include <iostream>
using namespace std;
// print even numbers from 1 to 20 using but if number is multiple of 4 then skip that number using 'continue' statement.
int main(){
    for(int i=2;i<=20;i=i+2){
        if(i%4==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}