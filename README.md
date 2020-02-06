# Rubix-Cube-Simulator
This program accepts a string of moves through command-line arguments, to simulate a 2x2 rubix cube.
This program is written in ansi-C. It will print the 3 visible faces of the cube to the console.

## MOVE NOTATION

An internal pivot mechanism enables each face in the cube to turn independently , thus mixing up the colors. A move is 1/4 turn rotation of a face, either in clockwise or counterclockwise. The faces are defined as follows:

- F (Front)      - The side currently facing the solver.
- B (Back)       - The side opposite the front.
- U (Up)         - The side above or on top of the front side.                    ![Rubix Cube](/cube.png)
- D (Down)       - The side opposite the top.
- L (Left)       - The side directly to the left of the front
- R (Right)      - The side directly to the right of the front.
