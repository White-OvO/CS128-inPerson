#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare color names
    string violet = "Violet";
    string indigo = "Indigo";
    string blue = "Blue";
    string green = "Green";
    string yellow = "Yellow";
    string orange = "Orange";
    string red = "Red";

    // Declare unicorn names
    string unicorn1 = "Scarlet Comet";
    string unicorn2 = "Sunshine Speedster";
    string unicorn3 = "Ocean Dreamer";
    string unicorn4 = "Forest Whisperer";
    string unicorn5 = "Stardust Knight";

    // Declare drop requirements for each unicorn
    // Scarlet Comet
int scarlestComet_VioletDropsRequired = 0; // Scarlet Comet drop requirements
int scarlestComet_IndigoDropsRequired = 0;
int scarlestComet_BlueDropsRequired = 3;
int scarlestComet_GreenDropsRequired = 0;
int scarlestComet_YellowDropsRequired = 2;
int scarlestComet_OrangeDropsRequired = 0;
int scarlestComet_RedDropsRequired = 7;



// SUNSHINE SPEEDSTER
int sunshineSpeedster_VioletDropsRequired = 0; // Sunshine Speedster drop requirements
int sunshineSpeedster_IndigoDropsRequired = 0;
int sunshineSpeedster_BlueDropsRequired = 0;
int sunshineSpeedster_GreenDropsRequired = 3;
int sunshineSpeedster_YellowDropsRequired = 8;
int sunshineSpeedster_OrangeDropsRequired = 2;
int sunshineSpeedster_RedDropsRequired = 0;

// OCEAN DREAMER
int oceanDreamer_VioletDropsRequired = 2; // Ocean Dreamer drop requirements
int oceanDreamer_IndigoDropsRequired = 4;
int oceanDreamer_BlueDropsRequired = 6;
int oceanDreamer_GreenDropsRequired = 0;
int oceanDreamer_YellowDropsRequired = 0;
int oceanDreamer_OrangeDropsRequired = 0;
int oceanDreamer_RedDropsRequired = 0;

// FOREST WHISPERER
int forestWhisperer_VioletDropsRequired = 0; // Forest Whisperer drop requirements
int forestWhisperer_IndigoDropsRequired = 0;
int forestWhisperer_BlueDropsRequired = 0;
int forestWhisperer_GreenDropsRequired = 5;
int forestWhisperer_YellowDropsRequired = 0;
int forestWhisperer_OrangeDropsRequired = 3;
int forestWhisperer_RedDropsRequired = 2;

// STARDUST KNIGHT
int stardustKnight_VioletDropsRequired = 7; // Stardust Knight drop requirements
int stardustKnight_IndigoDropsRequired = 3;
int stardustKnight_BlueDropsRequired = 0;
int stardustKnight_GreenDropsRequired = 0;
int stardustKnight_YellowDropsRequired = 3;
int stardustKnight_OrangeDropsRequired = 0;
int stardustKnight_RedDropsRequired = 0;


    // Output each unicorn's needs
    cout << unicorn1 << " needs:\n";
    cout << violet << ": " << scarlestComet_VioletDropsRequired << ", " << indigo << ": " << scarlestComet_IndigoDropsRequired << ", "
         << blue << ": " << scarlestComet_BlueDropsRequired << ", " << green << ": " << scarlestComet_GreenDropsRequired << ", "
         << yellow << ": " << scarlestComet_YellowDropsRequired << ", " << orange << ": " << scarlestComet_OrangeDropsRequired << ", "
         << red << ": " << scarlestComet_RedDropsRequired << "\n\n";

    cout << unicorn2 << " needs:\n";
    cout << violet << ": " << sunshineSpeedster_VioletDropsRequired << ", " << indigo << ": " << sunshineSpeedster_IndigoDropsRequired << ", "
         << blue << ": " << sunshineSpeedster_BlueDropsRequired << ", " << green << ": " << sunshineSpeedster_GreenDropsRequired << ", "
         << yellow << ": " << sunshineSpeedster_YellowDropsRequired << ", " << orange << ": " << sunshineSpeedster_OrangeDropsRequired << ", "
         << red << ": " << sunshineSpeedster_RedDropsRequired << "\n\n";

    cout << unicorn3 << " needs:\n";
    cout << violet << ": " << oceanDreamer_VioletDropsRequired << ", " << indigo << ": " << oceanDreamer_IndigoDropsRequired << ", "
         << blue << ": " << oceanDreamer_BlueDropsRequired << ", " << green << ": " << oceanDreamer_GreenDropsRequired << ", "
         << yellow << ": " << oceanDreamer_YellowDropsRequired << ", " << orange << ": " << oceanDreamer_OrangeDropsRequired << ", "
         << red << ": " << oceanDreamer_RedDropsRequired << "\n\n";

    cout << unicorn4 << " needs:\n";
    cout << violet << ": " << forestWhisperer_VioletDropsRequired << ", " << indigo << ": " << forestWhisperer_IndigoDropsRequired << ", "
         << blue << ": " << forestWhisperer_BlueDropsRequired << ", " << green << ": " << forestWhisperer_GreenDropsRequired << ", "
         << yellow << ": " << forestWhisperer_YellowDropsRequired << ", " << orange << ": " << forestWhisperer_OrangeDropsRequired << ", "
         << red << ": " << forestWhisperer_RedDropsRequired << "\n\n";

    cout << unicorn5 << " needs:\n";
    cout << violet << ": " << stardustKnight_VioletDropsRequired << ", " << indigo << ": " << stardustKnight_IndigoDropsRequired << ", "
         << blue << ": " << stardustKnight_BlueDropsRequired << ", " << green << ": " << stardustKnight_GreenDropsRequired << ", "
         << yellow << ": " << stardustKnight_YellowDropsRequired << ", " << orange << ": " << stardustKnight_OrangeDropsRequired << ", "
         << red << ": " << stardustKnight_RedDropsRequired << "\n\n";

    return 0;
}