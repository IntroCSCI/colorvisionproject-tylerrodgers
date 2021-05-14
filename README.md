# Project Bravo

## Description

My program will ask the user for the number of colors they need and the name of a file they want to save the palette to. Eventually, with the number of colors they ask for, they will be provided a color palette based on their input.

### v0.2 Updates

*In this update, the users desired number of colors for the palette are now  created. The program generates the amount of random colors requested as hexadecimals, and stores them into a file.*

### v1.0 Updates

*In this update, the created palette's details are composed and displayed to the user. This includes the palette's name and colors generated.*


## Developer

Tyler Rodgers

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Hello, do you want to generate a color palette(y/n)?
Y
Okay, what number of colors do you need(2-10)?
5
Great. And what do you want the file/palette to be called?
myPalette1

Colors created...
Name: myPalette1
Colors Generated:
#ADFF2F
#FFA500
#00FFFF
#FFC0CB
#F0FFF0
```

## C++ Guide

### Variables and Data Types


I used 'char' to represent either 'y' or 'n' to allow the user to select whether they want to create a color palette or not. Both answer options are single letters and are best represented as a character.

I used 'int' to represent the number of colors the user selects for their color palette. The amount of color options are 2 through 10 so the best way to represent the user's input is with an integer.

I used 'string' to represent the name the user chooses for their file. A string is the best option to store the file name.


### Console Input and Output


Input and output have been utilizied to complete the user's goal for the color palette. For example the user is prompted with output asking how many colors they want, and what they want to name their file. They then input their desired answers, and their values are stored for later use.

### Decisions


Multiple decisions were needed for the users satisfactory. If the user wants to create a color palette they have to make a decision which leads them to a new set of options. They are then presented with a new set of questions, which they must answer with correct inputs to move forward.

### Iteration


I used a do-while loop to gather the users input of how many colors they want. I used a do-while loop because they need to choose between 2-10 colors, and if they do not answer correctly it need's to repeat. These loops allowed me to make sure I got their input at least once.

### File Input and Output


Files have been used effictively as the file created was opened for writing. Then the users input was stored in the file and ready for later use. In the end, the palettes information is displayed and the info inside the CSS file is displayed onto the console for the user to see which hexadecimal colors were selected.

### Arrays/Vectors

I created a vector of 'string' variables called colors. This vector currently contains 54 different colors in the form of hexadecimal values. This vector allows me to choose random colors from it when needed, and use them to create the color palette.

### Functions

I created a function called 'createUniqueColors' which is the return type void. This function is unique as it grabs the requested amount of colors from a vector, and stores them into a file. It takes in two parameters, the first is an integer which holds the number of colors the user wants to use in the palette. And the second is a vector of 'string' variable that contains 54 different hexadecimal values. When executed it takes in these two parameters by value, opens a file, saves the amount of colors into the file, and then closes the file.

I created another function called 'randomNum' which is the return type 'int'. This function is unique because it creates a random number between the numbers 2-10. This function takes in one parameter which is a vector, and is used with pass by value. When called this function randomly chooses one of the integers from the function and returns the value. This function is currently not in use of the program.

Another function I created is called 'hexaCheck' which is the return type 'bool'. This function takes in one parameter which is a string, and is used with pass by value. When called this function takes a string and determines if it is a hexadecimal. If it is, the function returns True, and if it is not a hexadecimal the function returns False.

### Classes

I created a class called palette which has three functions. The three function members are 'createUniqueColors', 'colorsChosen', and 'compose'. The attributes of my palette class are defined as name, colors, and number. The 'createUniqueColors' function chooses a certian amount of random colors from a vector depending on the users input, and then stores them into the CSS file. The 'colorsChosen' function opens up the file which stores the random colors chosen, and prints them out onto the screen. The function called 'compose' brings all of the palettes information together and allows the user to see what was created. When run, 'compose' displays the name of the palette created and the random colors that were chosen. 