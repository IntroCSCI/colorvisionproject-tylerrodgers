//Author: Tyler Rodgers
#include <iostream>
#include <fstream>

using namespace std;
//Palette Generator: Provided a number of distinct colors needed (2 or more), create a palette of colors that avoid or minimize problematic color combinations
//SVG
int main()
{
  char answer;
  int colorNumber = 0;
  string fileName = "";
  fstream reader;
  string line = "";
  string colors[10] = {"EE4540", "C72C41", "801336", "510A32", "2D142C", "8FB9A8", "FEFAD4", "FCD0BA", "F1828D", "765D69"}; 
  //array with 10 colors 
  //cout << colors[2] << endl;


  cout << "Hello, do you want to generate a color palette(y/n)?" << endl;
  cin >> answer;

  //get how many colors they want in the palette
  if (answer == 'y' || answer == 'Y'){
    do{
      cout << "Okay, what number of colors do you need(2-10)?" << endl;
      cin >> colorNumber;

    } while (colorNumber < 2 || colorNumber > 10); 
    

  if (colorNumber < 2 || colorNumber > 10){
    cout << "Invalid answer. Please try again." << endl;
  }  
  else {
    cout << "Great. And what do you want the file to be called?" << endl;
    cin >> fileName; 
  }

  //based on their input, save a file that contains the number of distinct color values requested
  reader.open(fileName, ios::out);
  reader << colorNumber << endl;
  reader.close();
  //cout << colorNum << endl;
  //cout << fileName << endl;

  }
  else {
    cout << "Okay, Goodbye." << endl;
  }

  return 0;
}
