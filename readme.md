# Coin Change Program

This C++ program is designed to calculate the minimum number of coins needed to make change for a given amount of money. The program accepts an input amount from the user and outputs the number of coins required for each denomination ($500, $200, $100, $50, $20, $10, $5, $2, and $1).

## How to Use

1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. Enter the amount of money you need to change when prompted.
4. The program will output the number of coins required for each denomination to make the change.

## Example


How much money do you need to change? > 1234
You used 2 $500 coins, 1 $200 coins, 1 $100 coins, 0 $50 coins, 1 $20 coins, 1 $10 coins, 0 $5 coins, 2 $2 coins, and 0 $1 coins.


## Code Overview

The program uses an array `coin` to store the values of each coin denomination and an array `usedCoin` to keep track of the number of coins used for each denomination.

The `change` function takes an input amount and calculates the minimum number of coins required for each denomination using a greedy approach. It iterates through the `coin` array and subtracts the largest possible coin value from the remaining amount until the amount becomes zero.

The `main` function prompts the user for the input amount, calls the `change` function, and then displays the number of coins used for each denomination.

## File Structure

- `src/main.cpp`: Contains the main source code for the program.

## Dependencies

- C++ Standard Library (`iostream`)

## Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.
