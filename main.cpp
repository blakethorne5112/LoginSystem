#include <bits/stdc++.h>
using namespace std;
int initLogin();
void Login();
void Register();
string user;
string pass;

int initLogin(){
    int logOrReg = 0;
    int result;
    cout << "Hello! Welcome to the Login System." << endl;
    cout << "Type (1) to Login, Type (2) to Register a New Account" << endl;
    cout<< "Please enter your answer here: ";
    cin >> logOrReg;
    if(logOrReg == 1){
        result = 1;
    }
    else if(logOrReg == 2){
        result = 2;
    }
    else{
        cout << "Your entry was not one of the options. Please try again." << endl;
        initLogin();
    }
    return result;
}

void Login(){
    string tempuser, temppass;
    cout << "Please input your username." << endl;
    cin >> tempuser;
    if(tempuser != user){
        while(tempuser != user){
            cout << "This username does not match any of our records. Please re-enter the username." << endl;
            cin >> tempuser;
        }
    }
    cout << "Please input your password." << endl;
    cin >> temppass;
    if(temppass != pass){
        while(temppass != pass){
            cout << "This username and password combination does not match any of our records. Please re-enter the password." << endl;
            cin >> temppass;
        }
    }
    cout << "Login Successful! Thanks for logging in. End of Program." << endl;
}

void Register(){
    cout << "Please input your username." << endl;
    cin >> user;
    cout << "Please input your password." << endl;
    cin >> pass;
}

int main(){
    int result;
    bool AccExists = false;
    result = initLogin();
    if(result == 1){
        if(AccExists == false){
            cout << "No Accounts exist yet. Please Register an Account first." << endl;
            Register();
            bool AccExists = true;
            cout << "Thanks for Registering! Now, time to Login." << endl;
        }
    }
    else{
        Register();
        bool AccExists = true;
        cout << "Thanks for Registering! Now, time to Login." << endl;
    }
    Login();
}

