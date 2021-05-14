#ifndef PALETTE_H
#define PALETTE_H
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

class palette
{

  private:
  

  public: 
    string name;
    vector <string> colors;
    //add createUniqueColors values 
    int number;
    vector <string> x;
    fstream i;
    string line = "";

    //Checks for Duplicates in colors chosen
    //bool isUnique( string );

    //creates random colors and adds them to a file
    void createUniqueColors();

    void compose();

    void colorsChosen();


};

#endif