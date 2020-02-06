# Rubix-Cube-Simulator
This program accepts a string of moves through command-line arguments, to simulate a 2x2 rubix cube.
This program is written in ansi-C. It will print the 3 visible faces of the cube to the console.

## MOVE NOTATION

An internal pivot mechanism enables each face in the cube to turn independently , thus mixing up the colors. A move is 1/4 turn rotation of a face, either in clockwise or counterclockwise. The faces are defined as follows:

- F (Front)      - The side currently facing the solver.
- B (Back)       - The side opposite the front.
- U (Up)         - The side above or on top of the front side.                  
- D (Down)       - The side opposite the top.
- L (Left)       - The side directly to the left of the front
- R (Right)      - The side directly to the right of the front.

A letter by itself indicates a clockwise move while a letter with a plus sign (+) after it indicates a counterclockwise move. These directions are as one is looking at the specified face directly. A letter followed by digit two (2)  denotes two moves (direction is irrelevant in this case since a 1/2 turn can be correctly made in either direction) .


- The letters X,Y and Z are used to indicate that the entire cube is turned about one of it's axes corresponding to R, U and F respectively. When X,Y or Z are followed by a plus sign , it is an indication that the cube is rotated in a counterclockwise direction. When they are followed by the digit two, the cube is rotated 180 degrees.

When the rubix cube is solved , the program will tell the user that the cube has been solved.


Please view the notations file and sample input file for instructions.
