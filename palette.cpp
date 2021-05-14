#include "palette.h"
using namespace std;
#include <fstream>


void palette::createUniqueColors()
{
  fstream read;
    read.open("colorful.css", ios::out);
    srand ( time(NULL) );
    for (int i=0; i < number; i++)
    {
      int a = 0;
      a = rand() % 53;
      read << "#" << x[a] << endl;
    }
}

void palette::colorsChosen()
{
  i.open("colorful.css", ios::in);
  if (i.is_open())
  {
    while (i.eof() == false)
    {
      getline( i, line );
      cout << line << endl;
    }
  }
  i.close();
}


void palette::compose()
{
  cout << "Name: " << name << endl;
  cout << "Colors generated: " << endl;
  colorsChosen();
}
