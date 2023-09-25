// BT19: Spectral Analysis
#include <iostream>
using namespace std;

int main()
{
    double wavelength;

    // Nhap buoc song cua song dien tu
    cout << "Enter the wavelength of an electromagnetic wave in meters: ";
    cin >> wavelength;

    // Hien thi ten song
    if (wavelength > 1E-2)
    {
        cout << "A wave with a wavelength of " << wavelength << " meters would be a Radio Waves.";
    }
    else if ((wavelength > 1E-3) && (wavelength < 1E-2))
    {
        cout << "A wave with a wavelength of " << wavelength << " meters would be a Microwaves.";
    }
    else if ((wavelength > 7E-7) && (wavelength < 1E-3))
    {
        cout << "A wave with a wavelength of " << wavelength << " meters would be an Infrared .";
    }
    else if ((wavelength > 4E-7) && (wavelength < 7E-7))
    {
        cout << "A wave with a wavelength of " << wavelength << " meters would be a Visible Light.";
    }
    else if ((wavelength > 1E-8) && (wavelength < 4E-7))
    {
        cout << "A wave with a wavelength of " << wavelength << " meters would be an Ultraviolet.";
    }
    else if ((wavelength > 1E-11) && (wavelength < 1E-8))
    {
        cout << "A wave with a wavelength of " << wavelength << " meters would be an X Rays.";
    }
    else if (wavelength < 1E-11)
    {
        cout << "A wave with a wavelength of " << wavelength << " meters would be a Gamma Rays.";
    }
    return 0;
}