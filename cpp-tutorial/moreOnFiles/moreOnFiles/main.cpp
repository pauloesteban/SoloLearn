//
//  main.cpp
//  moreOnFiles
//
//  Created by Paulo Chiliguano on 12/01/2019.
//  Copyright © 2019 Paulo Chiliguano. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    // open file
    ofstream MyFile("anotherTest.txt");
    // check if the file is open and ready
    if (MyFile.is_open()) {
        // write into the file
        MyFile << "This is awesome! \n";
    }
    else {
        cout << "Something went wrong";
    }
    // close the file
    MyFile.close();
    
    return 0;
}
