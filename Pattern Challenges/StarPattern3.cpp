//Code a program to print Third Star pattern in C++ with Ritik.
/*
like this : * * * * *
            * * * *
            * * *
            * *
            *
*/
#include"iostream"
#include"conio.h"
using namespace std;
int main(){
    cout<<"Third Star Pattern in C++ programming\n";
    
    for(int i= 1; i<= 5; i++){
        for(int j= 1; j<= 6- i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    //getch();
    return(0);
}