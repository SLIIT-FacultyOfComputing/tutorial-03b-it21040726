#include <iostream>
using namespace std;

void print(int length, int width);
void input(int length, int width);


int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int length, int width) {
cout << "Enter Length : ";
 cin >> Length;
cout << "Enter width : ";
 cin >> width << endl;
 
}

// Implement the Input Function here
int input(int width, int length){
int input  =  width * length;
return input;
}