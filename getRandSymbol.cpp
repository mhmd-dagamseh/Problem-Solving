#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
enum Symbol {
   Digits = 1,
   smallLetters = 2,
   capitalLetters = 3,
   Symbols = 4
};
Symbol sortInputs(char symbol) {
   if (symbol >= 32 && symbol <= 47 || symbol >= 58 && symbol <= 64 || symbol >= 91 && symbol <= 96 || symbol >= 123 && symbol <= 126)
   {
      return Symbol::Symbols;
   }
   else if (symbol >= 48 && symbol <= 57)
   {
      return Symbol::Digits;
   }
   else if (symbol >= 65 && symbol <= 90)
   {
      return Symbol::capitalLetters;
   }
   else if (symbol >= 97 && symbol <= 122)
   {
      return Symbol::smallLetters;
   }
   else {
      return Symbol::capitalLetters;
   }
}
int randNumber(int From,int To) 
{

   int randNum = rand() % (To - From + 1) + From;
   return randNum;
}
void randAskii(Symbol sym) 
{
   char Sym = 0;
   if (sym == Symbol::Symbols) {
      if (rand() % 2 == 0) 
      {
         Sym = randNumber(32,47);
      }
      else 
      {
         Sym = randNumber(58,64);
      }
   }
   else if (sym == Symbol::smallLetters) {
      Sym = randNumber(97,122);
   }
   else if (sym == Symbol::capitalLetters) 
   {
      Sym = randNumber(65,90);
   }
   else if (sym == Symbol::Digits) 
   {
      Sym = randNumber(48,57);
   }
   cout << "\n\n" << Sym << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    char inp1 = '1';
    char inp2 = '#';
    char inp3 = 's';
    char inp4 = 'P';
    Symbol sym1 = sortInputs(inp1);
    Symbol sym2 = sortInputs(inp2);
    Symbol sym3 = sortInputs(inp3);
    Symbol sym4 = sortInputs(inp4);
    randAskii(sym1);
    randAskii(sym2);
    randAskii(sym3);
    randAskii(sym4);
}