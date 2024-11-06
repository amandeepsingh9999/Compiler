// #include <iostream>
// using namespace std;
//
// enum Day {
//     Sunday,    // 0
//     Monday,    // 1
//     Tuesday,   // 2
//     Wednesday, // 3
//     Thursday,  // 4
//     Friday,    // 5
//     Saturday   // 6
// };
//
// int main() {
//     Day today = Friday;
//
//     if (today == Friday) {
//         cout << "It's Friday! Time to relax!" << endl;
//     }
//
//     return 0;
// }
// -------------------------------------------------------
//
//
// #include <iostream>
// using namespace std;
//
// enum TrafficLight {
//     Red = 1,
//     Yellow,
//     Green
// };
//
// int main() {
//     TrafficLight signal = Green;
//
//     switch (signal) {
//         case Red:
//             cout << "Stop!" << endl;
//             break;
//         case Yellow:
//             cout << "Get Ready..." << endl;
//             break;
//         case Green:
//             cout << "Go!" << endl;
//             break;
//     }
//
//     return 0;
// }
// -------------------------------------------------------
//
//
//
// #include <iostream>
// using namespace std;
//
// enum class Color {
//     Red,
//     Green,
//     Blue
// };
//
// int main() {
//     Color favorite = Color::Green;
//
//     if (favorite == Color::Green) {
//         cout << "You like green!" << endl;
//     }
//
//     // Uncommenting the following line will cause a compile-time error:
//     // if (favorite == 1) { }
//
//     return 0;
// }
// -------------------------------------------------------
//
//
//
// #include <iostream>
// using namespace std;
//
// enum ErrorCode {
//     Success = 0,
//     NotFound = 404,
//     ServerError = 500
// };
//
// int main() {
//     ErrorCode code = NotFound;
//
//     cout << "Error Code: " << code << endl; // Output: Error Code: 404
//
//     return 0;
// }
// -------------------------------------------------------
//
//
//
// #include <iostream>
// using namespace std;
//
// enum Fruit {
//     Apple,
//     Banana,
//     Orange,
//     Mango,
//     FruitCount // This will store the number of fruits
// };
//
// int main() {
//     string fruitNames[FruitCount] = {"Apple", "Banana", "Orange", "Mango"};
//
//     for (int i = 0; i < FruitCount; ++i) {
//         cout << fruitNames[i] << endl;
//     }
//
//     return 0;
// }
//
//
//
