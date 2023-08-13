#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout<<"Enter the name of file whose text count you want"<<endl;
    cin>>filename;
    ifstream file(filename);
    if(!file){
        cout<<"This file doesnot exist"<<endl;
        return 1;
    }
    int count = 0;
    string word;
    while(file>>word){
        count++;
    }
    cout<<"Number of words in this file is: "<<count<<endl;
    
    return 0;
}
