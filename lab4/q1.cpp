#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0, double i = 0) : real(r), imag(i) {}
        Complex operator+(const Complex& c) const {
            return Complex(this->real + c.real, this->imag + c.imag);
        }
        Complex operator-(const Complex& c) const {
            return Complex(this->real - c.real, this->imag - c.imag);
        }
        Complex operator/(const Complex& c) const {
            return Complex(
                (this->real * c.real + this->imag * c.imag) / (c.real * c.real + c.imag * c.imag),
                (this->imag * c.real - this->real * c.imag) / (c.real * c.real + c.imag * c.imag)
            );
        }
        friend ostream& operator<<(ostream& os, const Complex& c) {
            os << c.real << " + " << c.imag << "i";
            return os;
        }
};

int main() {
    Complex c1(4, 5), c2(2, -3);
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "Sum = " << c1 + c2 << endl;
    cout << "Difference = " << c1 - c2 << endl;
    cout << "Quotient = " << c1 / c2 << endl;
    return 0;
   }