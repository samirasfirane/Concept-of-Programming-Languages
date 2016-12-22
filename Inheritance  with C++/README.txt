first we put all the header files and source files in the working directory

to compile the C++ program in empress two options :
1- let empress name and create the executable file in which case it will be called a.out

we type the G++ and the name all of all the .cpp file to compile so the complete command is :

g++ asfiranedriver.cpp asfiranecircle.cpp asfiranesphere.cpp asfiranerectangle.cpp asfiranesquare.cpp asfiranecube.cpp

2- second options if we want the exec to be a file of our choice like I did in my case it was asfiranehierarchy we call
g++ with option -o and follow it witht he name of the file we want the exec to be in




g++ -o asfiranehierarchy asfiranedriver.cpp asfiranecircle.cpp asfiranesphere.cpp asfiranerectangle.cpp asfiranesquare.cpp asfiranecube.cpp



to run the program in empress we just need to type in the command line ./"name of exec file" in our case ./asfiranehierarchy


included with the attachement a record file that is a script of the compilation and execution of the program