#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}
    bool read(Records &records) {
        _file.open(_filename, ios::in);
        if (_file.is_open()) {
            string line;
            while (getline(_file, line)) {
                try {
                    records.push_back(stoi(line));
                } catch (const std::invalid_argument&) {
                    cout << "Wrong argument when reading the file: " << _filename << endl;
                    _file.close();
                    return false;
                } catch (const std::out_of_range&) {
                    cout << "Out of range when reading the file: " << _filename << endl;
                    _file.close();
                    return false;
                }
            }
            _file.close();
            return true;
        } else {
            cout << "Failed to open the file: " << _filename << endl;
            return false;
        }
    }
};

int main() {
    RecordsManager recordM("test_clean.txt");
    // RecordsManager recordM("test_corrupt1.txt");
    // RecordsManager recordM("test_corrupt2.txt");
    Records myRecords;

    if (recordM.read(myRecords)) {
        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << sum << endl;
    }

    return 0;
}
