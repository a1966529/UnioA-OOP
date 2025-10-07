#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> Records;

class RecordsManager {
 private:
  fstream _file;
  string _filename;

 public:
  RecordsManager(string filename) : _filename(filename) {}

  void read(Records& records) {
    _file.open(_filename, ios::in);

    try {
      if (!_file.is_open()) {
        throw runtime_error("fail to open file");
      }

      string line;
      while (getline(_file, line)) {
        try {
          int value = stoi(line);  // might throw
          records.push_back(value);
        } catch (const invalid_argument& e) {
          cout << "invalid_argument error" << endl;
          throw;
        } catch (const out_of_range& e) {
          cout << "out_of_range error" << endl;
          throw;
        }
      }

      if (_file.is_open()) {
        _file.close();
      }

    } catch (...) {
      if (_file.is_open()) {
        _file.close();
      }
      throw;  // rethrow to main
    }
  }
};

int main(int argc, char* argv[]) {
  Records myRecords;
  string filename = "records.txt";

  if (argc > 1) filename = argv[1];

  RecordsManager recordM(filename);

  try {
    recordM.read(myRecords);
  } catch (const invalid_argument&) {
    cerr << "Caught invalid_argument in main()" << endl;
    return 1;
  } catch (const out_of_range&) {
    cerr << "Caught out_of_range in main()" << endl;
    return 1;
  } catch (const runtime_error& e) {
    cerr << "Caught runtime_error in main(): " << e.what() << endl;
    return 1;
  } catch (...) {
    cerr << "Caught unknown exception in main()" << endl;
    return 1;
  }

  int sum = 0;
  for (int i = 0; i < myRecords.size(); i++) {
    sum += myRecords[i];
  }

  cout << sum << endl;
  return 0;
}
