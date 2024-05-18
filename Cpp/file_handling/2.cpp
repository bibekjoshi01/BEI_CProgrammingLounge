// Opening files using open()
// to process a set of files sequentially.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("country");
    fout << "US\n";
    fout << "UK\n";
    fout << "UAE";

    fout.close();

    fout.open("capital");
    fout << "WashingTon DC\n";
    fout << "London\n";
    fout << "Abu Dhabi";

    fout.close();

    cout << "Reading from files" << endl;
    const int N = 80;
    char country[N];
    char capital[N];

    ifstream fin1, fin2;
    fin1.open("country");
    fin2.open("capital");

    cout << "Countries: Capitals " << endl;
    while (fin1 && fin2)
    {
        if (fin1.eof() && fin2.eof())
        {
            cout << "End of file: ";
            exit(1);
        }
        else
        {
            fin1.getline(country, N);
            fin2.getline(capital, N);
            cout << country << " : " << capital << endl;
        }
    }

    fin1.close();
    fin2.close();

    return 0;
}