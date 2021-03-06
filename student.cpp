#include <iostream>
#include <string>
#include "student.h"
#include <vector>

using namespace std;

student :: student ()
{
  first = "";
  last = "";
}

void student :: setName ( string firstName, string lastName )
{
  first = firstName;
  last = lastName;
}

string student :: fullName () 
{
  string name = first;
  name.append(" ");
  name.append(last);
  return name;
}

void student :: addGrade ( double letter )
{
  grades.push_back(letter);
}

double student :: getScore ()
{
  double total = 0.0;
  double answer = 0.0;

  if ( grades.size() == 0.0 )
  {
    answer = 0.0;
    return answer;
  }
  else
  {
    for ( int i=0; i < grades.size(); i++ )
    {
      total += grades[i]; 
    }
    answer = total/grades.size(); 
    return answer;
  }
}
