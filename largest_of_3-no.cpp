//Mishree kalaria
//24070123052
//Batch: A2

#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a;
    cin>>b;
    cin>>c;

    //Without using logical functions or operators(!=,==,&&,|)
    ifa>b){
        if(a>c){
            cout<<a<<" is greatest"<<endl;
        }
        else if(c>a){
            cout<<c<<" is greatest"<<endl;
        }
        else{
            cout<<"Both "<<a<<" &"<<b<<" are greater than "<<c<<"<<endl;
        }
    }
    
    else if(b>a){
        if(b>a){
            cout<<b<<" is greatest"<<endl;
        }
        else if(c>b){
            cout<<c<<" is greatest"<<endl;
        }
        else{
            cout<<"Both "<<b<<" &"<<c<<" are greater than <<a<<"<<endl;
        }
    }
    
    else {
        if(a>c){
            cout<<"Both "<<a<<" &"<<c<<" are greater"<<endl;
        }
        else if(c>a){
            cout<<c<<" is greatest"<<endl;
        }
        else{
            cout<<"All are equal"<<endl;
        }
    }
    
    return 0;
}
