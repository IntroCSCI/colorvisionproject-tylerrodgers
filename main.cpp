//Author: Tyler Rodgers
#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
using namespace std;
#include "palette.h"


//FUNCTION DECLARATION
bool hexaCheck(string); //Checks if string is a hexadecimal
void createUniqueColors( int, vector <string> ); //Creates x amount of colors 
int randomNum( vector <int> ); //Gives random number between 2-10


//PALETTE GENERATOR: Provided a number of distinct colors needed (2 or more), create a palette of colors that avoid or minimize problematic color combinations
int main()
{
  palette palette;
  char answer;
  char answer2;
  int randNum = 0;
  int colorNumber = 0;
  string fileName = "";
  fstream reader;
  string line = "";
  vector <int> randomHolder = {2, 3, 4, 5, 6, 7, 8, 9, 10};
  //VECTOR OF 54 COLORS
  palette.colors = {"FFFFFF", "FFC0CB", "FFE4E1", "C0C0C0", 
    "FFA07A", "FAEBD7", "808080", "FFA500", "FAF0E6", "FF6347", "000000", 
    "F5F5DC", "FF0000", "FFFFE0", "F5F5F5", "FFD700", "800000", "FFF0F5", 
    "FFFF00", "F4A460", "FDF5E6", "D2B48C", "808000", "F0F8FF", "00FF00", 
    "ADFF2F", "FFF5EE", "66CDAA", "008000", "F8F8FF", "00FFFF", "5F9EA0",
    "F0FFF0", "7FFFD4", "008080", "FFFAF0", "0000FF", "4682B4", "F0FFFF", 
    "B0E0E6", "000080", "F5FFFA", "FF00FF", "4B0082", "FFFAFA", "D8BFD8", 
    "800080", "FFFFF0", "DCDCDC", "708090", "E6E6FA", "DA70D6", "8B0000",
    "FF69B4"};


  cout << "Hello, do you want to create a color palette(y/n)?" << endl;
  cin >> answer;
  //get how many colors they want in the palette
  if (answer == 'y' || answer == 'Y')
  {
    do
    {
      cout << "Okay, what number of colors do you need(2-10)?" << endl;
      cin >> colorNumber;
    } while (colorNumber < 2 || colorNumber > 10); 
     if ( colorNumber >=2 && colorNumber <=10 )
    {
      cout << "Great. And what do you want the file/palette to be called?" << endl;
      cin >> palette.name; 
      cout << endl;
      cout << "Colors created..." << endl;
    } 
    //based on their input, save a file that contains the number of distinct color values requested
    reader.open(fileName, ios::out);
    reader << colorNumber << endl;
    reader.close();
    
    //Creates x amount of colors and saves them to a file
    createUniqueColors( colorNumber, palette.colors );
    palette.compose();

  } else 
  {
    cout << "Okay, Goodbye." << endl;
  }
  return 0;
}


//FUNCTION DEFINITIONS 
int randomNum( vector <int> & x )
{
  srand(time(NULL));
  int a = 0;
  a = rand() % 9;
  return x[a];
  //cout << x << endl;
}


void createUniqueColors( int number, vector <string> x )
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


bool hexaCheck( string values ) 
{
  if ( values.size() == 3 || values.size() == 6 ) 
  {
    for ( int i = 0; i < values.size(); i++ ) 
    {
      if( !(values[i] >= '0' && values[i] <= '9') &&
          !(values[i] >= 'a' && values[i] <= 'f') &&
          !(values[i] >= 'A' && values[i] <= 'F') )
          {
            return false;
          }
    }
    return true;
  }
  else 
  {
    return false;
  }
}