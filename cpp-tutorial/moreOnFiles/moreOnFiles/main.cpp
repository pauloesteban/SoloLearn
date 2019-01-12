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
    string line;
    
    // open file
    ofstream MyFile("anotherTest.txt");
    // check if the file is open and ready
    if (MyFile.is_open()) {
        // write into the file
        MyFile << "I love C++ \n";
        MyFile << "This is awesome! \n";
    }
    else {
        cout << "Something went wrong";
    }
    // close the file
    MyFile.close();
    
    // read the file
    ifstream MyFile2("anotherTest.txt");
    // read file line by line
    while(getline(MyFile2, line)) {
        cout << line << '\n';
    }
    // close file
    MyFile2.close();
    
    return 0;
}
