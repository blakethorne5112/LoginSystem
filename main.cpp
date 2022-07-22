#include <bits/stdc++.h>
using namespace std;
int initLogin();
int Login(bool);
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

int Login(bool n){
    if(n == false){
        cout << "No Accounts exist yet. Please Register an Account first." << endl;
        return 0;
    }

}

int Register(){
    cout << "Your entry was not one of the options. Please try again." << endl;
}

int main(){
    int result;
    bool AccExists;
    result = initLogin();
    if(result == 1){
        int result = Login(AccExists);
        if(result == 0){
            Register();
        }
    }
    else{
        Register();
    }
}

