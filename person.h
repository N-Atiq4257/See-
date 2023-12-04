#ifndef PEROSN_H
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

    int getAge(){ return age; }
    void getlname(char* temp){ strcpy(temp, lname); }
    void getfname(char* temp){ strcpy(temp, fname); }

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
};



#endif
