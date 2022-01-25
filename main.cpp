// ALL THE INFROMATIONS WILL BE SAVED INSIDE A FILE CALLED "details.txt" IN THE SAME FOLDER AS THIS CODE
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
// making variables
    string file, name, addr;
    int a;

// opening the file
  ofstream ops("details.txt");
// a short description of the program
    cout<< "\n" << "This is the place where you permanentally store you info like name,address, and age."
      << "(All the details will be saved in a file called 'details.txt' in the same place where you stored this code)";
cout<<"\n" <<"\n";
// taking in the name
  cout<< "Please enter your name: ";
  getline(cin, name);

cout<<"\n";
// taking in the address
  cout<< "Now please enter you address: ";
  getline(cin, addr);

cout<<"\n";
// taking in the age in numbers
  cout<< "Now please enter your age in numbers (ex= 10,20 etc.): ";
  cin>> a;

cout<<"\n";
// telling if the process was success
    cout<< "The informations that you entered are saved successfully.";

cout<<"\n";
// showing the information that they entered
string fileData = "The informations that you entered are as follow:-\n Name: " + name + "\n Address: " + addr + "\n Age: " + to_string(a);

  ops.write(fileData.data(), fileData.size());
  ops.close();

}
