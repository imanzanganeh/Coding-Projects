#include <iostream>

using namespace std;

int main()
{
   int twos = 0, threes = 0, userInput = 0;
   
   cout << "Enter a positive integer: "; 
   cin >> userInput;
   
   while((userInput % 2 == 0) || (userInput % 3 == 0))// Check if 2 and 3 are factors. If so, continue prime factorization until userInput = 1 is reached(the end) or prime factor was found
   {
       if(userInput % 2 == 0) // 2 is assumed to be beginning of prime factorization for any input
       {
           twos++;
           userInput /= 2;
       }
       
       else if(userInput % 3 == 0)
       {
           threes++;
           userInput /= 3;
       }

   }

   if(userInput % 3 != 1) // End of prime factorization wasn't reached. Prime factor other than 2 or 3 exists
   {
       cout << "No" << endl;
   }
   
   else
   {
       cout << "Yes" << endl;
       
       cout << "Twos=" << twos;
       cout << " Threes=" << threes;
   }
    
   return 0;
}