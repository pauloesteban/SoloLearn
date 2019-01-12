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
    // insert code here...
    ofstream MyFile;
    MyFile.open("test.txt");
    MyFile << "Some text. \n";
    MyFile.close();
    
    return 0;
}
