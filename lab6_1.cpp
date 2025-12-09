#include<iostream>
using namespace std;

int main(){
    int num ,odd =0 , even =0 ;
    while(true){
        cout << "Enter an integer: ";
        cin >> num ;
        if(num == 0){
            break;
        } else {
            if(num%2 == 0){
                even++;
            } else {
                odd++;
            }
        }
    }
    cout << "#Even numbers = " << even <<"\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
