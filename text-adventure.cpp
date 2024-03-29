// CodeAcademy - C++ - Loop Challenge Project
// Justin Liao, 3/28/2024

#include <iostream>

int main() {

    int tries = 0;

    char choice1;
    std::cout << "Welcome to the Arena of Self-improvement!\n";
    std::cout << "Health - Please select either choice below:\n";
    std::cout << "(a) always eat junk foods; play video games every day; sleep all day\n";
    std::cout << "(b) junk food x regular food; hangout with friends & partying whenever; occasionally do 5 pushups\n";
    std::cout << "(c) eat super healthy; build genuine relationships & trusts; go to the gym every day\n";
    
    // Check if user enter a, b, or c; check if user exceed 3 times
    while ((choice1 != 'a' && choice1 != 'b' && choice1 != 'c') && tries < 3) {
        std::cout << "Your choice: ";
        std::cin >> choice1;
        tries++;
    }
    tries = 0;
    if (choice1 != 'a' && choice1 != 'b' && choice1 != 'c') {
        std::cout << "Glitch has occured! Please re-run the game!";
        return 0;
    }

    switch (choice1) {
    case 'a':
        std::cout << "sigh! sigh!\n";
        break;
    case 'b':
        std::cout << "okay!\n";
        break;
    default:
        std::cout << "keep up the work!\n";
        break;
    }

    char choice2;
    std::cout << "Mentality - Please select either choice below:\n";
    std::cout << "(a) live in fantasy; easily triggered by emotions; no focus in life\n";
    std::cout << "(b) live day-by-day without a purpose; lose control sometimes; work based on feelings\n";
    std::cout << "(c) have big ambitions/dreams; control emotions whenever; stay disciplined\n";
    
    // Check if user enter a, b, or c; check if user exceed 3 times
    while ((choice2 != 'a' && choice2 != 'b' && choice2 != 'c') && tries < 3) {
        std::cout << "Your choice: ";
        std::cin >> choice2;
        tries++;
    }
    tries = 0;
    if (choice2 != 'a' && choice2 != 'b' && choice2 != 'c') {
        std::cout << "Glitch has occured! Please re-run the game!";
        return 0;
    }

    switch (choice2) {
    case 'a':
        std::cout << "go live in the mountain! there's nothing for you now.\n";
        break;
    case 'b':
        std::cout << "you still got a chance! get better!\n";
        break;
    default:
        std::cout << "never stop the grind! there are endless potentials for you!\n";
        break;
    }

    char choice3;
    std::cout << "Work - Please select either choice below:\n";
    std::cout << "(a) do useless stuff without the mind to change\n";
    std::cout << "(b) work based on schedules, have no idea\n";
    std::cout << "(c) outwork everyone to achieve goals, improve yourself constantly\n";
    
    // Check if user enter a, b, or c; check if user exceed 3 times
    while ((choice3 != 'a' && choice3 != 'b' && choice3 != 'c') && tries < 3) {
        std::cout << "Your choice: ";
        std::cin >> choice3;
        tries++;
    }
    tries = 0;
    if (choice3 != 'a' && choice3 != 'b' && choice3 != 'c') {
        std::cout << "Glitch has occured! Please re-run the game!";
        return 0;
    }

    if (choice1 == 'c' && choice2 == 'c' && choice3 == 'c') {
        std::cout << "You have escaped the MATRIX! Well done my friend!";
    } else if (choice1 == 'a' && choice2 == 'b' && choice3 == 'c') {
        std::cout << "You just need time, but there's no time now, take action!";
    } else if (choice1 == 'a' && choice2 == 'b' && choice3 == 'b') {
        std::cout << "Maybe you are still there for your dream? Think about it!";
    } else {
        std::cout << "Failed!";
    }

    return 0;
}