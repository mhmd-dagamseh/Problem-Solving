#include <iostream>
#include <string>
using namespace std;
string readText(string Message)
{
    string Text;
    cout << Message;
    getline(cin, Text);
    return Text;
}
string getEncryption(string Text, short encryptionKey)
{
    for (int i = 0; i < size(Text); i++)
    {
        Text[i] = char((int)Text[i] + encryptionKey);
    }
    return Text;
}
string getDecryption(string Text, short encryptionKey)
{
    for (int i = 0; i < size(Text); i++)
    {
        Text[i] = char((int)Text[i] - encryptionKey);
    }
    return Text;
}
int main()
{
    short encryptionKey = -8;
    string Message = readText("Welcome, Enter Any Message To Encryption It : ");
    cout << endl;
    cout << "After Encryption -->   ";
    cout << getEncryption(Message, encryptionKey);
    cout << endl;
    cout << "After Decryption -->   ";
    cout << getDecryption(getEncryption(Message, encryptionKey), encryptionKey);
}