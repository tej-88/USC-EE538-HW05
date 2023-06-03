#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

#include "gtest/gtest.h"
#include "q.h"

TEST(FindAllPasswords, Test1) {
  std::unordered_set<std::string> dictionary = {"ab", "cd"};
  std::unordered_set<std::string> valid_passwords = {"abb", "cdd", "aa", "j"};

  BlackBox blackbox(valid_passwords, dictionary);

  std::unordered_set<std::string> expected = {"aa", "j"};
  auto actual = FindAllPasswords(blackbox, 3);

  EXPECT_EQ(actual, expected);
}

// TODO: Add more tests below!