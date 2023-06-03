#include <iostream>
#include <string>
#include <vector>

// TODO: Implement the functions asked here in the .cc file.

// Given a vector of weights and values and an integer value representing total
// capacity of a knapsack, implement the following function.

// The knapSack01NoDynamicProgramming function does not use Dynamic Programming
// and it is not a recursive function. Instead it calls a recursive function
// knapSack01NoDynamicProgramming_Helper (which is also not using dynamic
// programming).

// 1. Implement knapSack01NoDynamicProgramming:
int knapSack01NoDynamicProgramming(const std::vector<int> &weights,
                                   const std::vector<int> &values, int w);

// 2. Define knapSack01NoDynamicProgramming_Helper and implement it in the .cc
// file. This function has takes similar arguments like
// knapSack01NoDynamicProgramming with some extra helper parameters:
int knapSack01NoDynamicProgramming_Helper(const std::vector<int> &weights,
                                          const std::vector<int> &values, int w,
                                          int i);

//-----------------------------------------------------------------------------
// 3. Implement knapSack01Memo:

// The knapSack01Memo function itself doesn't use a memo. It's just a wrapper
// around knapSack01Memo_Helper.
int knapSack01Memo(const std::vector<int> &weights,
                   const std::vector<int> &values, int w);

// 4. Implement knapSack01Memo_Helper. This function has takes similar arguments
// like knapSack01Memo with some extra helper parameters such as i and memo,
// which is a two-dimensional vector:
int knapSack01Memo_Helper(const std::vector<int> &weights,
                          const std::vector<int> &values, int w, int i,
                          std::vector<std::vector<int>> &memo);
//-----------------------------------------------------------------------------
// 3. Implement knapSack01Tablulation. Use a two-dimensional vector for the
// table.
int knapSack01Tablulation(const std::vector<int> &weights,
                          const std::vector<int> &values, int w);
