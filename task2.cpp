// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int t;
    srand(time(0));
    t = rand()%100 + 1;
    int n;
    while(true){
        cout<<"Guess a number between 1 and 100: "<<endl;
        cin>>n;
        if(cin.fail()){
            cin.clear();
            cin.ignore(10000,'\n');
            cout<<"You entered invalid input, please enter valid input"<<endl;
        }
        else{
            if(n==t){
                cout<<"Hola! you guessed the correct number: "<<t<<endl;
            }
            else if(n<t){
                cout<<"You guessed low number! Try again"<<endl;
            }
            else{
                cout<<"You guessed high number! Try again"<<endl;
            }
        }
    }
    
    return 0;
}
