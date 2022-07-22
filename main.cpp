#include <bits/stdc++.h>
using namespace std;
int initLogin();
int Login();
int Register();

int initLogin(){
    int logOrReg = 0;
    int result;
    cout << "Hello! Welcome to the Login System." << endl;
    cout << "Type (1) to Login, Type (2) to Register a New Account" << endl;
    cout<< "Please enter your answer here: ";
    cin >> logOrReg;
    if(logOrReg == 1){
        cout << "Success!" << endl;
        result = 1;
    }
    else if(logOrReg == 2){
        cout << "Success!" << endl;
        result = 2;
    }
    else{
        cout << "Your entry was not one of the options. Please try again." << endl;
        initLogin();
    }
    return result;
}

int Login(){
    return 1;
}

int Register(){
    return 1;
}

int main(){
    int result;
    result = initLogin();
    if(result == 1){
        Login();
    }
    else{
        Register();
    }
}

