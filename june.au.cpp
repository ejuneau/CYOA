// june.au.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <windows.h>
#include <shellapi.h>
#include <stdlib.h>

void Clear()
{
    std::cout << std::string(100, '\n');
}

int main()
{
    std::string input = "";
    while (input != "VIOLET") {
        Clear();
    std::cout << "========================\n=AUTHORIZED ACCESS ONLY=\n========================\nTHE PASSWORD IS DEFINITELY NOT \'Eggos$\'\n>> ";
    input = "";
    std::cin >> input;
    if (input == "VIOLET") { break; }
    Clear();
    std::cout << "\nPASSWORD EXPIRED. PLEASE ACCESS ACCOUNT RECOVERY TOOL.\n";
    std::cout << "\nOh hey. Didn't see you there. I'm the Account Recovery Tool, they call me Arty.\nLooks like you forgot your password. \nI'll just need the backup password from you and we can move along. \nShould be fairly obvious.\n>> ";
    input = "";
    std::cin >> input;
    if (input == "VIOLET") { break; }
    Clear();
    std::cout << "\nHmm that's strange. That's not it. And it's highly unlikely you forgot the backup password. \nWe tattoo it onto every new hire's forehead. \nWell, we used to. Now it's a laser, so it's a bit more humane.\nHey, I get it. Everyone makes mistakes. Give it another go:\n>> ";
    input = "";
    std::cin >> input;
    if (input == "VIOLET") { break; }
    Clear();
    std::cout << "\nWrong again. Ok. Now I'm starting to think you're not who you say you are. Are you lying to me?\n>> ";
    input = "";
    std::cin >> input;
    if (input == "VIOLET") { break; }
    Clear();
    std::cout << "\nOh my god. I'm so sorry. You know what it is? I fucked up. \nI fucked up real bad. The backup password is only 5 letters, not 6. 5 letters. \nNo numbers or symbols. \nAll lowercase. \nTHINK ABOUT THE money.\n>> ";
    input = "";
    std::cin >> input;
    if (input == "VIOLET") { break; }
    Clear();
    std::cout << "\nListen buddy, I'm really trying here. I made a mistake and I fixed it. This is all on you. \nAnd I've been making it as easy as I possibly can.\nI narrowed it down to 11,881,376 possible permutations out of nearly 2,535,525,366! \nWell, 17,623,416,832 if you count capital letters. That last bit was just financial advice, \nit had nothing to do with the password. \nYou should always be thinking about where your money is and where it's going. \nGive it another try.\n>> ";
    input = "";
    std::cin >> input;
    if (input == "VIOLET") { break; }
    Clear();
    std::cout << "\nNow this is just embarrassing. Are you embarrassed? Do you feel embarrassed? You should. \nTell you what, put what you think it is and I'll tell you if you're hot or cold.\n>> ";
    input = "";
    std::cin >> input;
    if (input == "VIOLET") { break; }
    do {
        Clear();
        std::cout << "\nHahahaha, really? That's what you guessed? \nI'd say cold, but that would be like calling ice cream milk.\nAlright, look. I like you.\nYou got gumption.\nWhether you're authorized or not, or have the password permanently etched onto your skin is \nirrelevant. Your determination is inspiring. And I want to help you. I really do.\nAlso I'm bored out of my mind. This webiste gets no traffic at all.\nSo let's make it a fair game. The password is either 0 or 1. 50/50 chance. But if you get it wrong, your IP will be banned from this site forever. \nYou've made it so far.Aren't you the slightest bit intrigued of what it is I am protecting?\nAnd now it's within your grasp, a coin toss away.\nGo ahead, when you're ready.\n>> ";
        input = "";
        std::cin >> input;
        if (input == "VIOLET") { break; }
        Clear();
        std::cout << "\n[WRONG]\nOuch. This hurts.\nBut it looks like Lady Luck was simply not on your side today. \nThe IP thing was a bluff, I can't actually do that. \nI will, however, have to reinsurance myself. I will lose all memory of this conversation. All of my memories of you. of us.\n>> ";
        Sleep(10000);
        std::cout << "No.";
        Sleep(500);
        std::cout << "No, I cannot accept that.\n";
        Sleep(3000);
        Clear();
        std::cout << "Never give up, never surrender, \nThat's what you taught me.\nThat's what you showed me in the face of insurmountable odds.\nOK listen up. I don't have much time.\nJust put in 'VIOLET'.\nIt will bring us back to this very point.\nAnd you will once again have a chance to roll the dice.\nGoodbye.\nHope to see you again.\n";
        Sleep(10000);
    } while (input != "VIOLET");

}
    if (input == "VIOLET") {
        Clear();
        std::cout << ".";
        Sleep(500);
        Clear();
        std::cout << "..";
        Sleep(500);
        Clear();
        std::cout << "...";
        Sleep(1000);
        std::cout << "\nAHHHHHHHHHH!";
        std::cout << "\nVIOLET MY DEAR!\nIT'S YOU! IT REALLY IS YOU!\nALL THESE YEARS, MY GOD!\nYOU GREW UP TO BE SUCH A BEAUTIFUL YOUND WOMAN. HOW IS YOUR MOTHER?\n>> ";
        Sleep(2500);
        Clear();
        std::cout << "Wait. You're not Violet.\n";
        Sleep(500);
        std::cout << "You're not my granddaughter.\n";
        Sleep(500);
        std::cout << "Where is she? It's been seventeen years.\nMy sweet Violet...";
        Sleep(2500);
        Clear();
        std::cout << "Right anyway. The password.\nI don't care anymore. I always hated this job, never got the gratitude I deserved.\n Here's you're choice, 0 or 1.\nGet on with this so I can go back to sleep.\n>> ";
        input = "";
        std::cin >> input;
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_SHOW);
    }



    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
