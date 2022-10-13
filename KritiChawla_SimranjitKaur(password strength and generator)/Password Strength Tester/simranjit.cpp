#include <bits/stdc++.h> 
using namespace std; 
  
void checkpassword(string& password) 
{ 
    int n = password.length();      
    bool hasLower = false, hasUpper = false, hasDigit = false; 
  
    for (int i = 0; i < n; i++) { 
        if (islower(password[i])) 
            hasLower = true; 
        if (isupper(password[i])) 
            hasUpper = true; 
        if (isdigit(password[i])) 
            hasDigit = true; 
    } 
  
    // Displaying the strength of password 
    
    cout << "Strength of password you have entered is :-"; 
    
    if ( hasUpper && hasDigit && hasLower && (n >= 6)) // considering a strong must be of length 6 or more
        cout << "Strong" << endl; 
    else if ((hasLower || hasUpper) && hasDigit && (n >=6)) 
        //when at least a lower case or uppercase is used along with digit
        cout << "Moderate" << endl; 
    else
        cout << "Weak" << endl; 
} 
  
 
int main() 
{   cout << "Welcome, lets check your password " << endl;
    cout << "Considering average length of a strong password should be more then 6 character " << endl;
  cout << "Please enter a password which should contain :- " << endl;
  cout << " * at least one upper and lowercase letter " << endl;
  cout << " * and also at least one digit " << endl;
    string password;
    cout <<"Enter password"<<endl;
  getline(cin,password);
    checkpassword(password); 
    return 0; 
}