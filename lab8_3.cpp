// Version 1 
// nomal if else
// #include <iostream>
// using namespace std;

// int main() {
//     int age, height, bounty;
//     string character;

//     // รับอายุ
//     cout << "Enter your age: ";
//     cin >> age;

//     if (age <= 25){
//         // รับส่วนสูง
//         cout << "Enter your height: ";
//         cin >> height;
//         if (height < 100){
//             character = "Chopper";
//             }else if (height < 180){
//                 character = "Usopp";
//                 }else{
//                     //รับค่าหัว
//                     cout << "Enter your bounty: ";
//                     cin >> bounty;
//                     if (bounty > 1100000000){
//                         character = "Zoro";
//                         }else{
//                             character = "Sanji";
//                             }
//                     }
//     }else if (age <= 60){
//         cout << "Enter your bounty: ";
//         cin >> bounty;
//         if (bounty > 500000000){
//             character = "Jinbe";
//         }else{
//             character = "Franky";
//             }
//     }else{
//         character = "Brook";
//         }
//     cout << "Your character = " << character << endl;
//     return 0;
// } 
// -------------------------------------------------------------
// Version2
// change character = (bounty > 1100000000) ? "Zoro" : "Sanji"; to else
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int age, height, bounty;
//     string character;

//     cout << "Enter your age: ";
//     cin >> age;

//     if (age <= 25) {
//         cout << "Enter your height: ";
//         cin >> height;
//         if (height < 100) character = "Chopper";
//         else if (height < 180) character = "Usopp";
//         else {
//             cout << "Enter your bounty: ";
//             cin >> bounty;
//             character = (bounty > 1100000000) ? "Zoro" : "Sanji";
//         }
//     } else if (age <= 60) {
//         cout << "Enter your bounty: ";
//         cin >> bounty;
//         character = (bounty > 500000000) ? "Jinbe" : "Franky";
//     } else {
//         character = "Brook";
//     }

//     cout << "Your character = " << character << endl;
//     return 0;
// }
// -------------------------------------------------------------
// Version 3
// Short Code and Add return For shot this code!!
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age, height, bounty;
    string character;

    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25) {
        cout << "Enter your height: ";
        cin >> height;
        character = (height < 100) ? "Chopper" : (height < 180) ? "Usopp" : [&]{
            cout << "Enter your bounty: ";
            cin >> bounty;
            return (bounty > 1100000000) ? "Zoro" : "Sanji";
        }();
    } else character = (age <= 60) ? (cout << "Enter your bounty: ", cin >> bounty, (bounty > 500000000) ? "Jinbe" : "Franky") : "Brook";

    cout << "Your character = " << character << endl;
    return 0;
}