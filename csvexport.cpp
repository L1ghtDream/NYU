#include <string>
#include <fstream>

using namespace std;

void csv_export(string data[][10], int records, int columns, string filename);

void csv_export(string data[][10], int records, int columns, string filename) {
    ofstream fout(filename, ios::out);

    for (int i = 0; i < records; i++) {
        for (int j = 0; j < columns; j++) {
            fout << data[i][j];
            if (j != columns - 1) {
                fout << ",";
            }
        }
        fout << endl;
    }
}
