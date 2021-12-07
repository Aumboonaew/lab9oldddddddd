#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int age;
    int height;
    int property;
    string x;
    
    cout << "Enter your age: ";
    cin >> age;

    if(age <= 20){
        cout << "Enter your height: ";
            cin >> height;
            if(height < 160){
                 x = "UNFRIEND";
            }
            else {
                if(height < 175){
                    x = "FRIEND";
                }
                else{
                    cout << "Enter your property: ";
                    cin >> property;
                    if(property > 69000000){
                        x = "MARRIED";
                        }        
                        else{
                            x = "ONE-NIGHT-STAND";
                        }
                    }
                }
            }

    else{
        if(age < 30){
            cout << "Enter your property: ";
            cin >> property;
            if(property > 10000000){
                x = "BEST FRIEND";
            }
            else{
                x = "UNFRIEND";
            }
        }
        else{
            x = "UNFRIEND";
        }
    }
    cout << "Your status = " << x;

    return 0;
}
        