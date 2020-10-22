#include <iostream>
#include <ctime>

void printIntro(int level) {
    std::cout << "\nThis is a triple x program. \nEnter correct code to reach the next level :-)";
    std::cout << "\nYour current level is: " << level;
    std::cout << std::endl;
}

bool runGame(int level) {
    printIntro(level);

    const int numberA = rand() % level + level;
    const int numberB = rand() % level + level;
    const int numberC = rand() % level + level;


    const int product = numberA * numberB * numberC;
    const int sum = numberA + numberB + numberC;

    std::cout << std::endl;
    std::cout << "+ There are three numers in the code" << std::endl;
    std::cout << "+ The numbers sums up to: " << sum << std::endl;
    std::cout << "+ The numbers multiply to give: " << product << std::endl;

    int guessA, guessB, guessC;
    std::cin >> guessA >> guessB >> guessC;

    const int guessSum = guessA + guessB + guessC;
    const int guessProduct = guessA * guessB * guessC;

    if (guessSum == sum && guessProduct == product) {
        std::cout << "You win :-D" << std::endl;
        return true;
    } else {
        std::cout << "You lose :-(" << std::endl;
        return false;
    }
}

int main() {
    int level = 1;
    const int maxLevel = 10;

    srand(time(NULL));

    while (level <= maxLevel) {
        const bool levelComplete = runGame(level);
        std::cin.clear();
        std::cin.ignore();
        if (levelComplete) {
            level++;
        }
        
    }

    std::cout << "\n You won the game!";

    return 0;
}
