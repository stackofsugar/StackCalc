## How to build StackCalc
- Using your prefered compiler
    - In your terminal, cd to /stackcalc/, and then `mkdir` a build directoey
    - After you navigate your way to the build directory, start the compiling process. If you're using g++, your syntax looks something like `g++ ../src/*.cpp -o StackCalc`. And then run the program with ./StackCalc
    - Note that you don't have to give a `-I` flag to give an `include directory`, because g++ is kinda smart and knows to include it automatically after reading the preprocessor inside the cpp files. But, if your compiler doesn't support this, you can add `-I../include/` flag.