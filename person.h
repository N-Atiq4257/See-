#ifndef PERSON_H
#define PERSON_H

#include <iostream.h>
#include <cstdlib>
#include <cstring>

class Person{
  // declare private variables which typically are just the attributes
  private:
    int age;
    char fname[20];
    char lname[20];

  public:
    // Null constructor
    Person(){
      age = 0;
      strcpy(fname, "Null");
      strcpy(lname, "Null");
    }
    // Constructor with other stuff in it 
    Person(char* f, char* l, int a){
      strcpy(fname, f);
      strcpy(lname, l);
      age = a;
    }

    // Destructor
    ~Person(){}

    // Get functions
    int getAge(){ return age; }
    // Void since strings/arrays aren't returned.
    void getlname(char* temp){ strcpy(temp, lname); }
    void getfname(char* temp){ strcpy(temp, fname); }

    // Srt functions
    int setAge(int a){
      // do some validation, yada yada
      age = a;
    }
    void setlname(char* l){
      strcpy(lname, l);
    }
    void setfname(char* f){
      strcpy(fname, f);
    }

    // Tostring!! i forgot this.
    void toString(char* temp){
      strcpy(temp, lname);
      strcat(temp, ", ");
      strcat(temp, fname);
      // :)
    }
};
// outside of class, this is where operator overloading happens.

// overloading for ==
int operator==(Person x, Person y){
  // This is one way to do so.
  return x.getAge() == y.getAge();
  /**
  Alternate Method!!!!
  
  char temp[41], temp2[41];
  x.toString(temp);
  y.toString(temp2);

  return strcmp(temp, temp2) == 0;
  **/
}

// IOSTREAM operators!!! they're (sorta) special!!!!
ostream& operator<<(ostream& os, Person x){
  char temp[41];
  x.toString(temp);
  
  os << temp << ", age " << x.getAge();

  return os;
}

#endif
