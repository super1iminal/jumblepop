# jumblepop
jumblepop is a game all about jumblepopping

# how to compile:
g++ [-o {name (without extension) of output file}] Entity.cpp Main.cpp ...
## The compilation line is currently (as of 4/4/23:02):
g++ -o jumblepop entity.cpp main.cpp enemy.cpp
## The directory (for me) is... (you will have to be at the same folder at the end)
C:\Users\asher ... \Basic_Tests
## notes:
- this can be done in the vscode terminal
- you need all of the .cpp files written in the compilation line, none of the .h files
- [means optional]
- {was a way for me to tell you that it has to be one word (no spaces)}
- you must be in the directory of the files you want to run (change directories by doing "cd {directory name}" then press tab to autofill the random characters that are necessary)
- your current directory is shown in the vscode terminal as C:\Users\.......
- if a cpp file is not in the directory you're in, you need to do relative addressing (look it up)
- if no -o name is specified, the output name will be a.out
# how to run:
.\{name of output file}.exe
## The run line is currently (as of 4/4/23:02):
.\jumblepop.exe

