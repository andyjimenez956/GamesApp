#pragma once
#include<iostream>
#include<ctime>

class highLow
{
public:

    void highLowGameplay() {
        std::cout << "This game is called High Low. \n";
        std::cout << "The Object of the game is to get if the next number is \n";
        std::cout << "higher or lower than the current number on display.\n";
        std::cout << "It is a game of alot of luck but also probability.\n";
        std::cout << "When you have your guess type in (h/H) for high or (l/L) for low.\n";
        std::cout << "Then click enter. \n";
        std::cout << "Try and get the highest score you can. Lets Start! \n";
        bool hlStatus = true;
        char hlChoice;
        char hlResult;
        int hlCurrentNumber;
        int hlNextNumber;
        int hlScore = 0;
        srand(time(0));
        std::cout << "Here is the fist number! \n";
        hlCurrentNumber = (rand() % 100) + 1;
        while (hlStatus == true) {
            std::cout << std::endl;
            std::cout << "The current number is " << hlCurrentNumber << std::endl;
            std::cout << "Is the next number Higher or Lower? \n";
            std::cin >> hlChoice;
            hlNextNumber = (rand() % 100) + 1;


            if (toupper(hlChoice) == 'L') {
                if (hlCurrentNumber >= hlNextNumber) {
                    hlStatus = true;
                    std::cout << hlNextNumber << " is the next number. \n";
                    std::cout << "You got it right! \n";
                    hlCurrentNumber = hlNextNumber;
                    hlScore++;

                }
                else {
                    hlStatus = false;
                    std::cout << hlNextNumber << " is the next number. \n";
                    std::cout << "You got it wrong. Game Over! \n";


                }
            }
            else if (toupper(hlChoice) == 'H') {
                if (hlCurrentNumber <= hlNextNumber) {
                    hlStatus = true;
                    std::cout << hlNextNumber << " is the next number. \n";
                    std::cout << "You got it right! \n";
                    hlCurrentNumber = hlNextNumber;
                    hlScore++;

                }
                else {
                    hlStatus = false;
                    std::cout << hlNextNumber << " is the next number. \n";
                    std::cout << "You got it wrong. Game Over! \n";
                }
            }

            else {
                std::cout << "Invalid input try agian.\n";

            }


        }
        std::cout << "Your final score is " << hlScore << std::endl;
        std::cout << std::endl;
        std::cout << "Do you want to Play Again or go to the Main Menu? \n";
    }


};

