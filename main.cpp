```
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool LoggedIn()
{
    string username, password, un, pw;
   
    cout << "Enter your username: "; cin >> username;
    cout << "Enter your password: "; cin >> password;

    ifstream read("data.txt");
    getline(read, un);
    getline(read, pw);
    
    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int choice;

    cout << "1: Register\n2: Login\n"; cin >> choice;

    if (choice == 1)
    {
        string username, password;
        cout << "Select a username: "; cin >> username;
        cout << "Select a password: "; cin >> password;

        ofstream file;

        file.open("data.txt");
        file << username << endl << password;
        file.close();

        main();
    }
    else if (choice == 2)
    {
        bool status = LoggedIn();

        if (!status)
        {
            cout << "False Login!";

            system("PAUSE");
            return 0;

        }
        else
        {
            cout << "Sucessfull login!\n";
            system("PAUSE");
            return 1;
        }
    }
}
```
