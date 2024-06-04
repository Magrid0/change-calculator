#include <iostream>
using namespace std;

int coin[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1}; // Array with all the coin value
int usedCoin[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0}; // Array with all the used coin value

// Text
string getChange = "How much money do you need to change? > ";
string usedCoins = "You used " + to_string(usedCoin[0]) + " $500 coins, " + to_string(usedCoin[1]) + " $200 coins, " + to_string(usedCoin[2]) + " $100 coins, " + to_string(usedCoin[3]) + " $50 coins, " + to_string(usedCoin[4]) + " $20 coins, " + to_string(usedCoin[5]) + " $10 coins, " + to_string(usedCoin[6]) + " $5 coins, " + to_string(usedCoin[7]) + " $2 coins, and " + to_string(usedCoin[8]) + " $1 coins.";
// Text end

void change(int amount) { // Function to change the money
    for (int i = 0; i < 9; i++) {
        while (amount >= coin[i]) {
            amount -= coin[i];
            usedCoin[i]++;
        }
    }
}

int main() {
    int amount; // Amount of money to change

    cout << getChange; 
    cin >> amount;

    change(amount); // Call change function and pass the amount of money;

    cout << usedCoins;

    return 0;
}