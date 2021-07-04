#include <iostream>
using namespace std;
 
int main()
{
   int age ;
   cout << "Enter the age of the voter\n";
   cin>> age;
   try {
      
      if (age < 18)
      {
         throw age;
      }
      cout << "The voter is Eligible to vote \n";
   }
   catch (int age ) {
      cout << "Voter Ineligible for voting \n";
   }
 
   return 0;
}