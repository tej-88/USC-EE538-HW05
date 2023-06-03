#include <iostream>
#include <string>
#include <list>

// TODO: Implement the following functions in q.cc.

// Given a non-negative integer n, Implement a function that calculates the
// n(th) Fibonacci number.

// Your implementation should have a worst case runtime complexity of O(n) and
// memory complexity of O(1).
int Fibonacci(int n);

//-----------------------------------------------------------------------------
// Remember the Coin Change Problem:

// Given n different coin types and an integer representing the total amount of
// money, find the minimum number of coins to make up that amount. You can use
// as many coins as you want from each coin type.

// Example:
// Input: coins = [1, 2, 5], amount = 11
// Output: 3
//-----------------------------------------------------------------------------

// Implement a function that calculates the minimum number and use memoization
// but with a twist: you are only allowed to use an std::list for the memo (Do
// not use map, unordered_map, set, vector, or array).

// CoinChangeMemo is not a recursive function, but it is a wrapper around
// CoinChangeMemo_Helper that is recursive. Use std::list<int> for memo.
int CoinChangeMemo(std::vector<int>& coins, int amount);

int CoinChangeMemo_Helper(std::vector<int>& coins, int amount,
                           std::list<int>& memo);

//-----------------------------------------------------------------------------
// Implement a function that calculates the minimum number and use tabulation
// but with a twist: you are only allowed to use an std::list for the table
// inside this function (Do not use map, unordered_map, set, vector, or array):
int CoinChangeTabulation(std::vector<int>& coins, int amount);