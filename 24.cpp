#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream inFile("PTIT.in");
    

    ofstream outFile("PTIT.out");
    
    string line;
    

    while (getline(inFile, line)) {
        
        outFile << line << "\n";
    }
    

    inFile.close();
    outFile.close();
    
    return 0;
}
