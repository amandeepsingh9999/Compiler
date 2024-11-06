// #include <iostream>
// using namespace std;
//
// // Define a struct to represent a Person
// struct Person {
//     string name;
//     int age;
//     float height;
// };
//
// int main() {
//     // Create a Person variable
//     Person p1 = {"Alice", 25, 5.6};
//
//     // Access members using the dot (.) operator
//     cout << "Name: " << p1.name << endl;
//     cout << "Age: " << p1.age << endl;
//     cout << "Height: " << p1.height << " ft" << endl;
//
//     return 0;
// }
//
// ---------------------------------------------------
// #include <iostream>
// using namespace std;
//
// struct Car {
//     string brand;
//     int year;
//     double price;
// };
//
// int main() {
//     // Create an array of Car objects
//     Car cars[2] = {
//         {"Toyota", 2018, 20000.5},
//         {"Honda", 2020, 25000.75}
//     };
//
//     // Loop through the array and print details
//     for (int i = 0; i < 2; i++) {
//         cout << "Brand: " << cars[i].brand << ", Year: " << cars[i].year
//              << ", Price: $" << cars[i].price << endl;
//     }
//
//     return 0;
// }
//

// ---------------------------------------------------
// #include <iostream>
// using namespace std;
//
// struct Rectangle {
//     int length, width;
//
//     // Function to calculate the area
//     int area() {
//         return length * width;
//     }
// };
//
// int main() {
//     Rectangle rect = {10, 5};
//     cout << "Area: " << rect.area() << endl;
//
//     return 0;
// }
// ---------------------------------------------------

// #include <iostream>
// using namespace std;
//
// struct Circle {
//     double radius;
// };
//
// // Function to calculate the area of a circle
// double area(Circle c) {
//     return 3.14 * c.radius * c.radius;
// }
//
// int main() {
//     Circle c1 = {7.0};
//     cout << "Area: " << area(c1) << endl;
//
//     return 0;
// }
//
// ---------------------------------------------------

// #include <iostream>
// using namespace std;
//
// struct Address {
//     string city;
//     int pincode;
// };
//
// struct Student {
//     string name;
//     int rollNumber;
//     Address addr;  // Nested struct
// };
//
// int main() {
//     Student s1 = {"John", 101, {"New York", 12345}};
//
//     cout << "Name: " << s1.name << endl;
//     cout << "City: " << s1.addr.city << endl;
//     cout << "Pincode: " << s1.addr.pincode << endl;
//
//     return 0;
// }
// ---------------------------------------------------

// #include <iostream>
// using namespace std;
//
// struct Book {
//     string title;
//     int pages;
// };
//
// int main() {
//     Book b1 = {"C++ Programming", 500};
//     Book* ptr = &b1;  // Pointer to the struct
//
//     // Access members using the pointer (arrow operator)
//     cout << "Title: " << ptr->title << endl;
//     cout << "Pages: " << ptr->pages << endl;
//
//     return 0;
// }
// ---------------------------------------------------

// #include <iostream>
// using namespace std;
//
// struct Point {
//     int x, y;
//
//     // Constructor to initialize x and y
//     Point(int a, int b) : x(a), y(b) {}
// };
//
// int main() {
//     Point p(5, 10);  // Create a Point object using the constructor
//
//     cout << "x: " << p.x << ", y: " << p.y << endl;
//
//     return 0;
// }
// ---------------------------------------------------

// #include <iostream>
// using namespace std;
//
// struct Employee {
//     string name;
//     int id;
// };
//
// // Create a shorthand using typedef
// typedef struct Employee Emp;
//
// int main() {
//     Emp e1 = {"Alice", 101};
//     cout << "Name: " << e1.name << ", ID: " << e1.id << endl;
//
//     return 0;
// }
// ---------------------------------------------------

#include <iostream>

using namespace std;

struct TrafficLight {
  enum Color { RED, YELLOW, GREEN } color;
};

int main() {
  TrafficLight light;
  light.color = TrafficLight::RED;

  if (light.color == TrafficLight::RED) {
    cout << "Stop!" << endl;
  }

  return 0;
}
