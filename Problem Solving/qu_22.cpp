// C++ Program to Show polymorphism in Class
#include<iostream>
#include<string>
using namespace std;

// Compile-time Polymorphism (Function overloading)
class calculate {
    public :
    // Function with 1 int parameter
        void func ( int x) {
            cout << "\nValue of x : " << x << endl;
        }

    // Function with same name but 1 double parameter
    void func (double x) {
        cout << "\nValue of x : " << x << endl;
    }

    // Function with same name but two int parameter
    void func (int x , int y) {
        cout << "\nValue of x : " << x << "\nVAlue of y : " << y << endl;
    }
};

// Compile-time Polymorphism (Operator overloading)
class complex {
    private :
        int real , img;
    public :
        complex (int real = 0 , int img = 0) {
            this -> real = real;
            this -> img = img;
        }

        complex operator+ ( complex const& obj) {
            complex result ;
            result.real = real + obj.real;
            result.img = img + obj.img ;
            return result;
        }   

        void print_result () {
            cout << "\nResult = " << real << " + " << img << "i\n";
        }
};

// Run-time Polymorphism (Function Overriding)
class animal {
    public :
        string color = "Black ";
};
class cat : public animal {
    public : 
        string color = "Red";
};

int main()
{
    // Compile-time Polymorphism (Function overloading)
    calculate c1;
    // Function being called depends on the parameters passed
    c1.func(12);
    c1.func(4.5);
    c1.func(20 , 30);

    // Compile-time Polymorphism (Operator overloading)
        int r1 , i1 , r2 , i2;
        cout << "\nEnter the real part of the first number : ";
        cin >> r1;
        cout << "\nEnter the imaginary part of the first number without i : " ;
        cin >> i1;
        cout << "\nEnter the real part of the second number : ";
        cin >> r2;
        cout << "\nEnter the imaginary part of the second number without i : " ;
        cin >> i2;
    complex n1(r1 , i1) , n2(r2 , i2);
    cout << "\nYour first number is : " << r1 << " + " << i1 << "i\n";
    cout << "\nYour second number is : " << r2 << " + " << i2 << "i\n";
    complex res = n1 + n2;
    res.print_result();


    // Compile-time Polymorphism (Function Overriding)
    animal d = cat();
    // accessing the field by reference variable which refers to derived
    cout << "\nThe color is : " << d.color << endl;
    return 0;
}