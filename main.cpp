
#include <iostream>
#include "triangle.hpp"

using namespace std;

int main() {

    Triangle<double> t1;
    Triangle<float> t2(4.5, 16.9, 6.5);
    Triangle<int> t3(2, 3, 300);

    vector<double> vec1 = t1.getSides();
    vector<float> vec2 = t2.getSides();
    vector<int> vec3 = t3.getSides();

    for (auto v:vec1)
        std::cout << v << ' ';
    cout << endl;

    for (auto v:vec2)
        std::cout << v << ' ';
    cout << endl;

    for (auto v:vec3)
        std::cout << v << ' ';
    cout << endl;
    cout << "\n Area of T1 " << t1.getArea() << "\n";
    cout << " Area of T2 " << t2.getArea() << "\n";
    cout << " Area of T3 " << t3.getArea() << "\n";
    cout << "\n Perimeter of T1 " << t1.getPerimeter() << "\n";
    cout << " Perimeter of T2 " << t2.getPerimeter() << "\n";
    cout << " Perimeter of T3 " << t3.getPerimeter() << "\n";
    if ((t1.side1 != 0) && (t1.side2 != 0) && (t1.side3 != 0)) {


        if (t1.isRightTriangle()) {
            cout << " T1 is Right \n";
        } else {
            if (t1.isIsosceles()) {
                cout << " T1 is Isosceles \n";
            } else {
                if (t1.isEquilateral()) {
                    cout << " T1 is Equilateral \n";
                } else {
                    cout << " T1 is none of the above \n";

                }
            }
        }
    } else {
        cout << "\n T1 not valid";
    }


    if ((t2.side1 != 0) && (t2.side2 != 0) && (t2.side3 != 0)) {

        if (t2.isRightTriangle()) {
            cout << " \n T2 is Right \n";

            if (t2.isIsosceles()) {
                cout << "\n T2 is Isosceles \n";
            }
        } else {
            if (t2.isEquilateral()) {
                cout << "\n T2 is Equilateral \n";
            } else {
                cout << "\n T2 is none of the above \n";
            }
        }
    } else {
        cout << "\n T2 not valid";
    }


    if ((t3.side1 != 0) && (t3.side2 != 0) && (t3.side3 != 0)) {
        if (t3.isRightTriangle()) {
            cout << " \n T3 is Right \n";

            if (t3.isIsosceles()) {
                cout << "\n T3 is Isosceles \n";
            }
        }else {
            if (t3.isEquilateral()) {
                cout << "\n T3 is Equilateral \n";
            } else {
                cout << "\n T3 is none of the above \n";

            }
         }

        }else{
            cout << "\n T3 not valid";
        }


    return 0;
}


