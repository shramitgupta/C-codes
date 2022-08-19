#include <iostream>

using namespace std;
typedef struct complexNumber {
   float real;
   float imag;
};
complexNumber addCN(complexNumber num1,complexNumber num2) {
   complexNumber temp;
   temp.real = num1.real + num2.real;
   temp.imag = num1.imag + num2.imag;
   return(temp);
}
int main() {
   complexNumber num1, num2, sum;
   cout << "Enter real part of Complex Number 1: " << endl;

   cin >> num1.real;
   cout << "Enter imaginary part of Complex Number 1: " << endl;

   cin >> num1.imag;
   cout << "Enter real part of Complex Number 2: " << endl;

   cin >> num2.real;
   cout << "Enter imaginary part of Complex Number 2: " << endl;

   cin >> num2.imag;
   sum = addCN(num1, num2);

   if(sum.imag >= 0)
   cout << "Sum of the two complex numbers is "<< sum.real <<" + "<< sum.imag <<"i";
   else
   cout << "Sum of the two complex numbers is "<< sum.real <<" + ("<< sum.imag <<")i";
   return 0;
}