#pragma once
#include <vector>
#include <cmath>
#include <iostream>
#include "triangle_Interface.hpp"


using namespace std;



template<class T>
class Triangle : public triangleInterface<T> {

public :
    T side1, side2, side3;

public :

    Triangle();

    Triangle(T side1, T side2, T side3);

    /** Sets or modifies the sides of this triangle. Ensures that the new sides form a triangle. */
    void setSides(T newSide1, T newSide2, T newSide3) override ;

    /** Gets the three sides of this triangle.
     * @return A vector containing the values of the sides. */
    std::vector<T> getSides() const override;

    /** Computes the area of this triangle. @return This triangle's area. */
    T getArea() const override;

    /** Computes the perimeter of this triangle. @return This triangle's perimeter. */
    T getPerimeter() const override;

    /** @return True if this triangle is a right triangle. */
    bool isRightTriangle() const override;

    /** @return True if this triangle is an equilateral triangle. */
    bool isEquilateral() const override;

    /** @return True if this triangle is an isosceles triangle. */
    bool isIsosceles() const override;

};





template<class T>
Triangle<T>::Triangle() {
	//TODO
    side1=3;
    side2=4;
    side3=5;
}




template <class T>
Triangle<T>::Triangle(T siden1, T siden2, T siden3) {
	//TODO

   setSides(siden1, siden2, siden3);

}






template <class T>
void Triangle<T>::setSides(T newSide1, T newSide2, T newSide3) {
    //TODO
    if ((newSide1 + newSide2 > newSide3) && (newSide1 + newSide3 > newSide2) && (newSide2 + newSide3 > newSide1)) {

        side1 = newSide1;
        side2 = newSide2;
        side3 = newSide3;
    } else {
        side1 = 0;
        side2 = 0;
        side3 = 0;
    }

}

/** Gets the three sides of this triangle.
 * @return A vector containing the values of the sides. */
template <class T>
std::vector<T> Triangle<T>::getSides() const {
	//TODO
    vector<T> vside {0, 0, 0};
    vside[0]=side1;
    vside[1]=side2;
    vside[2]=side3;
    return vside;
}




/** Computes the area of this triangle. @return This triangle's area. */
template <class T>
T Triangle<T>::getArea() const{
    //heron's formula triangle area
	//TODO
    T s=0;
    T area;
    s=(side1+side2+side3)/2;
    area=sqrt(s*(s-side1)*(s-side2)*(s-side3));

    return area;
}






/** Computes the perimeter of this triangle. @return This triangle's perimeter. */
template <class T>
T Triangle<T>::getPerimeter() const {
	//TODO
    T perimeter=0;
    perimeter=side1+side2+side3;
    return perimeter;
}






/** @return True if this triangle is a right triangle. */
template <class T>
bool Triangle<T>::isRightTriangle() const {
	//TODO
    if (( abs ( (side1 * side1 + side2 * side2 )-(side3 * side3)) <= .1) || ( abs ((side1 * side1 + side3 * side3 )- (side2 * side2)) <= .1) || ( abs ((side2 * side2 + side3 * side3) - (side1 * side1)<=.1))) {
        return true;
    }
    else {
        return false;
    }
}







/** @return True if this triangle is an equilateral triangle. */
template <class T>
bool Triangle<T>::isEquilateral() const {
	//TODO
    if((side1 == side2) && (side1 == side3)){
        return true;
    }
    else {
        return false;
    }
}







/** @return True if this triangle is an isosceles triangle. */
template <class T>
bool Triangle<T>::isIsosceles() const {
	//TODO
    if(((side1 == side2) && (side1 != side3))|| ((side1 == side3) && (side1 != side2)) || ((side2 == side3) && (side2 != side1))){
        return true;
    }
    else{
        return false;
    }
}