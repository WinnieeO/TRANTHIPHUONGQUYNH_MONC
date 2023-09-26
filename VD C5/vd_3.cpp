 #include <iostream>
 using namespace std;

 int main()
 {
    int x = 1, y = 1;

    x = ++y;        // y is incremented to 2
                    // Then 2 is assigned to x
    cout << x  << "  " << y << " "; // Displays 2  2

    x = --y;        // y is decremented to 1
                    // Then 1 is assigned to x
    cout << x << "  " << y; // Displays 1 1  
    return 0;
}

                        
