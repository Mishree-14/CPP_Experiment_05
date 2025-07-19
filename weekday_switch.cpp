// Mishree Kalaria
//24070123052
//Btach: A2

#include <iostream>
using namespace std;

int main() {
    int num;
    //char choice;
    
    //cout<<"DAYS OF THE WEEK:"<<"\n";
    //cout<<"1) Monday"<<"\n";
    //cout<<"2) Tuesday"<<"\n";
    //cout<<"3) Wednesday"<<"\n";
    //cout<<"4) Thursday"<<"\n";
    //cout<<"5) Friday"<<"\n";
    //cout<<"6) Saturday"<<"\n";
    //cout<<"7) Sunday"<<"\n";
    cout<<"Enter number to know the day of the week(1 to 7): ";
    cin>>num;
    
    
    switch (num){
        case 1:
        cout<<"\n"<<"Its Monday..lets start fresh!";
        break;
        case 2:
        cout<<"\n"<<"Tuesday..Motivate yourself!";
        break;
        case 3:
        cout<<"\n"<<"Wednesday...Mid weekday!";
        break;
        case 4:
        cout<<"\n"<<"Thursday...Colourful day!";
        break;
        case 5:
        cout<<"\n"<<"Friday...weekend coming!";
        break;
        case 6:
        cout<<"\n"<<"Its Saturday...woohoo!";
        break;
        case 7:
        cout<<"\n"<<"Its Sunday...yahh!";
        break;
        default:
        cout<<"\n"<<"INVALID INPUT!";
        break;
    }
    
    return 0;
}
