// Specification file for the Rectangle class.
#ifndef RECTANGLEV1_H
#define RECTANGLEV1_H

// Rectangle class declaration.
class Rectangle
{
    private:
        double width;
        double length;
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};

#endif