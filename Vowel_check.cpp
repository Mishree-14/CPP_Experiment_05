// Mishree Kalaria
//24070123052
//Btach: A2

#include <iostream>
using namespace std;

int main() {
    char alphabet,A,E,I,O,U,a,e,i,o,u;
    
    cout<<"Enter the alphabet: ";
    cin>>alphabet;
    
    if (alphabet == A || alphabet == E || alphabet == I || alphabet == O||alphabet == U ){
        cout<<"\n"<<"It is a vowel.";
    }
    else if (alphabet == a || alphabet == e|| alphabet == i || alphabet == o|| alphabet == u){
        cout<<"\n"<<"It is a vowel.";
    }
    else {
        cout<<"\n"<<"It is a consonant.";
    }
    return 0;
}
