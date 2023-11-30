#ifndef _PhanSo_h
#define _PhanSo_h
#include <iostream>
using namespace std;

class PhanSo {
  private: 
	int tu, mau;
  public:
	PhanSo(): tu(0), mau(1) {}; 
	PhanSo(int num, int den): tu(num), mau(den) {};
  	PhanSo(int value): tu(value), mau(1) {};
  	PhanSo operator + (const PhanSo & other) const{
        int num, den;
            if (other.mau == mau)
                num = tu + other.tu;
            else{
                num = tu * other.mau + other.tu * mau;
                den = mau * other.mau;
            }
            return PhanSo(num, den);
    };
  	PhanSo & operator++(){
    	tu += mau;
    	return * this;
    };
  	PhanSo & operator += (const PhanSo & other){
        if (other.mau == mau)
                tu = tu + other.tu;
        else{
                tu = tu * other.mau + other.tu * mau;
                mau *= other.mau;
        }
        return * this;
    };
	operator int() const {
        return tu / mau;}
	
    friend ostream &operator<< (ostream & os, const PhanSo & ps){
        os << ps.tu << "/" << ps.mau;
        return os;
    };
};
#endif