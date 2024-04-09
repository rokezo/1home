#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(0));
    int userScore = 0;
    int computerScore = 0;

    for (int i = 0; i < 3; ++i) {
        cout << "Натисніть Enter, щоб кинути кубики...";
        cin.get();

        int userRoll1 = rollDice();
        int userRoll2 = rollDice();
        int computerRoll1 = rollDice();
        int computerRoll2 = rollDice();

        cout << "Ваші кидки: " << userRoll1 << " " << userRoll2 << endl;
        cout << "Кидки комп'ютера: " << computerRoll1 << " " << computerRoll2 << endl;

        userScore += userRoll1 + userRoll2;
        computerScore += computerRoll1 + computerRoll2;

        cout << "Ваша сума: " << userScore << endl;
        cout << "Сума комп'ютера: " << computerScore << endl;
        cout << endl;
    }

    if (userScore > computerScore) {
        cout << "Ви перемогли!" << endl;
    }
    else if (userScore < computerScore) {
        cout << "Комп'ютер переміг!" << endl;
    }
    else {
        cout << "Нічия!" << endl;
    }

    return 0;
}
