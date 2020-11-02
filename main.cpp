#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Invalid";
    return 0;
  }

  if (argv[1][0] != '0') {
    cout << "Invalid number type";
    return 0;
  }

  if (argv[1][1] != 'x' && argv[1][1] != 'X') {
    cout << "Invalid type";
    return 0;
  }

  if (strlen(argv[1]) != 4) {
    cout << "Incorrect";
    return 0;
  }

  if ((argv[1][2] >= '0' && argv[1][2] <= '9') || (argv[1][2] >= 'A' && argv[1][2] <= 'F')){
   if ((argv[1][3] >= '0' && argv[1][3] <= '9') || (argv[1][3] >= 'A' && argv[1][3] <= 'F')){
      cout << argv[1] << endl;
      return 0;
   }
  } else {
    cout << "Invalid hexadecimal" << endl;
  }
}
