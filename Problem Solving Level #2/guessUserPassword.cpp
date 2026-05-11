#include <iostream>
using namespace std;
char readPasswordLetter(string Message)
{
    char Letter;
    cin >> Letter;
   if (Letter >= 'A' && Letter <= 'Z') {
       return Letter;
   }
   else {
       return 'A';
   }
}
string getPassword()
{
    string Password = "";
    for (int i = 1; i <= 3; i++) {
        cout << " [ " << i << " ] - ";
        Password += readPasswordLetter("Enter A Any Letter U Want : ");
    }
    return Password;
}
void guessPassword(string Password)
{
    char firstLetter = 'A';
    char lastLetter = 'Z';
    string guessedPassword = "";
    for (char firstBox = firstLetter; firstBox <= lastLetter; firstBox++)
    {
        for (char secondBox = firstLetter; secondBox <= lastLetter; secondBox++)
        {
            for (char lastBox = firstLetter; lastBox <= lastLetter; lastBox++)
            {
                guessedPassword = "";
                guessedPassword += firstBox;
                guessedPassword += secondBox;
                guessedPassword += lastBox;
                if (Password == guessedPassword) {
                    cout << "\n\n The Password Is : " << guessedPassword;
                }

            }
        }
    }
}
int main()
{
    string Password = getPassword();
    guessPassword(Password);
}