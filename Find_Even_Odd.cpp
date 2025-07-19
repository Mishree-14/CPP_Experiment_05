// Mishree Kalaria
// 24070123052
// Batch:A2

#include <iostream>
using namespace std;

int main() {
    int input_number;
    
    cout<<"Enter a number: ";
    cin>>input_number;
    
    if(input_number%2 == 0){
        cout<<"\n"<<"The number is Even.";
    }
    else if(input_number%2 != 0){
        cout<<"\n"<<"The number is Odd.";
    }
    else{
        cout<<"\n"<<"Invalid input!";
    }
    return 0;
}
