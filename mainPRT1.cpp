#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare each rainbow color as a separate variable
    string color0 = "Violet";
    string color1 = "Indigo";
    string color2 = "Blue";
    string color3 = "Green";
    string color4 = "Yellow";
    string color5 = "Orange";
    string color6 = "Red";

    int waterfallDrop = 1;  // Drop count starts at 1

    while (waterfallDrop <= 50) { // Simulate 50 drops, one per minute
        int sevenMinWindow = (waterfallDrop - 1) / 7;
        int colorIndex = sevenMinWindow % 7;

        string currentColor;

        // Select color based on index
        if (colorIndex == 0) currentColor = color0;
        else if (colorIndex == 1) currentColor = color1;
        else if (colorIndex == 2) currentColor = color2;
        else if (colorIndex == 3) currentColor = color3;
        else if (colorIndex == 4) currentColor = color4;
        else if (colorIndex == 5) currentColor = color5;
        else if (colorIndex == 6) currentColor = color6;

        // Output drop details

        cout << "Drop:" << waterfallDrop <<"||" <<  " The current waterfall drop is: " << currentColor << endl;
        


        waterfallDrop++;
    }

    return 0;
}