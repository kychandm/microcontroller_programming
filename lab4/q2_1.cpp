#include "q2.h"

int main()
{
    // Create an array of 3 Book objects
    Book library[3] = {Book("C++ Fundamentals", 300), Book("Data Structures", 450), Book("Algorithms", 500)};
    cout << "\n--- Library Contents ---\n";
    for (int i = 0; i < 3; ++i)
    {
        library[i].display();
    }
    cout << "\n--- End of Program ---\n";
    return 0;
}
