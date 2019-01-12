//
//  main.cpp
//  workingWithFiles
//
//  Created by Paulo Chiliguano on 10/01/2019.
//  Copyright © 2019 Paulo Chiliguano. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    // file object
    ofstream MyFile;
    // open the file
    MyFile.open("test.txt");
    // write into the file
    MyFile << "I love C++. \n";
    // close the file
    MyFile.close();
    
    return 0;
}
