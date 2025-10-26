
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
  // Update read function with exception handling
  void read(Records& records) {
    _file.open(_filename, ios::in);

      try{
        if(!_file.is_open()){
          throw runtime_error("file not opened");
        }
      string line;
      while (getline(_file, line)) {
        try {        
        int value = stoi(line);
        records.push_back(value);
        } catch (...) {
          cerr << "invalid_argument error" << endl;
          throw;
        } 
    }
      _file.close();
  }

  catch (const runtime_error& e) {
    cerr << "error guhhh" << endl;
    throw;
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
      } catch (...) {
        cerr << "error in main" << endl;
        return 1;
      }
      int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
         sum += myRecords[i];
        }
      cout << sum << endl;
      return 0;
}