//hi
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
int main(int argc, char *argv[]){
  // this is a program that prompts the user
  // to enter 10 names, in which it will then
  // indicate which one is the first.
  
  // make a list of 10 characters each of length 20.
  char names[10][20];
  char first[20];

  // start with the first one.
  cout << "Enter in a name: ";
  cin >> names[0];
  strcpy(first, names[0]);
  
  for (int i = 1; i < 10; i++){
    // do the rest!
    cout << "Enter another name: ";
    cin >> names[i];
    // now compare
    if (strcmp(names[i], first) < 0){
      // we have to see if the current name is before first!!!!
      // then we make first that name;
      strcpy(first, names[i]);
    }
    
  }

  cout << "The first name is: " << first;
  
  system("PAUSE");
  return EXIT_SUCCESS;
}
