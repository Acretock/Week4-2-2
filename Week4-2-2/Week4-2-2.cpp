#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    ifstream fin("text.txt");
    ofstream fout("output.txt");
    string line;
    double i;
    while (fin) {
        fin >> i;
        fin.ignore(1);
        cout << fixed << setprecision(3) << i << endl;
        
    }

}
