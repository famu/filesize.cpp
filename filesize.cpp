/*
 * filesize.cpp
 *
 *  Created on: sep 13, 2012
 *      Author: Faisal
 */

#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char* const argv[]) {
        if ( argc < 1 )
        {
                cout << endl << "Usage: program filename" << endl << endl;
                return 1;
        }
        else if ( argc != 2 )
        {
                cout << endl << "Usage: " << argv[0] << " filename" << endl << endl;
                return 1;
        }
    ifstream file(argv[1]);
    if(!file.is_open()) {
        cout << endl << "Unable to open file " << argv[1] << endl << endl;
        return 1;
    }

    long start, end;
    start = file.tellg();
    file.seekg (0, ios::end);
    end = file.tellg();

    file.close();

    cout << endl << "The File '" << argv[1] << "' is: " << (end-start) << " in Byte." << endl << endl;

    return 0;
}


