// Specification file for the Rectangle class
// This version has a constructor.
#ifndef RECTANGLEV3_H
#define RECTANGLEV3_H

class Rectangle
{
    private:
        double width;
        double length;
    public:
        Rectangle(); // Constructor
        void setWidth(double);
        void setLength(double);

        double getWidth() const
            { return width; }

        double getLength() const
            { return length; }

        double getArea() const
            { return width * length; }
};
#endif