#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   int i, x;
   char str[100];
   ofstream out("output2.txt");
   ifstream in("input2.txt");

   cout << "Please enter a string:\t";
   cin >> str;
   
   out<<str;
   in>>str;

   cout << "\nPlease choose following options:\n";
   cout << "1 = Encrypt the string.\n";
   cout << "2 = Decrypt the string.\n";
   cin >> x;

   
   switch(x)
   {
      
      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; 

         cout << "\nEncrypted string: " << str << endl;
         out<<str[i];
         break;

      
      case 2:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - 2; 

      cout << "\nDecrypted string: " << str << endl;
       in>>str[i];
       out<<str[i];
	  break;
      

      default:
         cout << "\nInvalid Input !!!\n";
   }
   return 0;
}



