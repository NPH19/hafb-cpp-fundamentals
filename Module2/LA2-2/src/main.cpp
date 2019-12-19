#include <array>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */

const int kMaxSize = 24;

int main() {
  // create an ojbect of type ifstream
  std::ifstream in;
  int age_size = 0;
  std::array<int, kMaxSize> ages;
  ages.fill(-1);

  // open the file age.txt
  in.open("../age.txt");
  if(in.fail()){
    std::cout << "Unable to open file\nshutting down";
  }

  // read from the age file and store values in an array
  while (age_size < kMaxSize && in >> ages[age_size]) {
    /* code */
    age_size++;
  }
  in.close();
  // print out the values in the array
  for(auto age: ages)
    std::cout<<age<<std::endl;

  // read to the end of the file
  std::array<string, kMaxSize> names;
  int name_size = 0;
  names.fill("");
  in.open("../name.txt");
  if(in.fail()){
    std::cout << "Unable to open file\nshutting down";
  }

  while (name_size < kMaxSize && getline(in, names[name_size])) {
    /* code */
    name_size++;
  }

  // print out the valid values in the array
  for(auto name: names)
    std::cout<<name<<std::endl;

  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt

  // read one name, store it in the array, and print it


  // read the rest of the names in the file


  // print valid elements in the names array


  // print all the elements in the names array


  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt


  // reset age and name arrays


  // read all the values from the name_age.txt file


  // print valid elements in the names and ages array


  // print all elements in the names and ages array


  return 0;
}
