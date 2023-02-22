//initlize components of GBA: memory, CPU, SDL (graphics)...
//method for quitting system.

//Graphics - 60fps, but there is a pause before it starts to render. This has to be taken into account by using Vblanks. Similar to V-sync to avoid tearing.
//rendering will be done using SDL. Memory Buffer - is set to the display Y value * display X value * 4 * size of int

//input - event handling
//event types: screen resize, quitting, key down, key up
//key events are most important. Key down to start action, key up to end action
//have to store current depressed key in memory

//ROM files are read in through arguments

