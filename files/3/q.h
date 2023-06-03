#include <iostream>
#include <string>
#include <unordered_set>

// Implementing a simple password cracker!
//-----------------------------------------------------------------------------
// The following is given to you. No need to change.
//-----------------------------------------------------------------------------
// A class that you **use** its member functions and constructor.
// No need to change this class!
// 1. Your FindAllPasswords function (see TODO section) should only call
// TryPassword and IsInDictionary functions as a blackbox.
//
// 2. Your tests should use the Constructor to set the valid passwords. See
// student_test.cc for an example
class BlackBox {
 public:
  // This constructor sets the valid passwords and a dictionary in the blackbox.
  // Only the TESTs can call this constructor.
  BlackBox(std::unordered_set<std::string>& valid_passwords,
           std::unordered_set<std::string>& dictionary)
      : valid_passwords_(valid_passwords), dictionary_(dictionary) {}

  // Given the input password, it returns if the password was valid or not. Your
  // function should only call this.
  bool TryPassword(std::string& password) {
    if (std::find(valid_passwords_.begin(), valid_passwords_.end(), password) !=
        valid_passwords_.end()) {
      return true;
    } else {
      return false;
    }
  }

  bool IsInDictionary(std::string& word) {
    for (auto& e : dictionary_) {
      if (word.find(e) != std::string::npos) {
        return true;
      }
    }
    return false;
  }

 private:
  std::unordered_set<std::string> valid_passwords_;
  std::unordered_set<std::string> dictionary_;
};
//-----------------------------------------------------------------------------
// TODO: Implement the functions asked here in the .cc file.
//-----------------------------------------------------------------------------ß
// Write a function that returns all the valid passwords that do not
// contain a word in the dictionary.
//
// You must generate all possible valid password combinations of the given
// max_length and try each password using the blackbox.
// A valid password consist only of lower case letters.
// Only passwords should be returned that are 1. passed by blackbox's
// TryPassword and 2. No substring of it exists in the dictionary. (Use
// blackbox's IsInDictionary).

// Example 1:
// dictionary = {"ab", "cd"}, max_length=3;
// valid_passwords = {"abb", "cdd", "aa", "j"};

// Output:
// {"aa", "j"}.
//
// Notice that "abb", "cdd" contain a word in the dictionary.

// Example 1:
// dictionary = {"a", "b"}, max_length=3;
// valid_passwords = {"aa", "bad", "sad", "aa", "bbb"};

// Output:
// {}; empty, since all valid_passwords contain a word in the dictionary.
//
// Note: This function calls an auxiliary function
// called FindAllPasswords_aux.
std::unordered_set<std::string> FindAllPasswords(BlackBox& blackbox,
                                                 int max_length);

// A recursive function that finds all the correct valid_passwords that do not
// contain a word in the dictionary and puts them in the `results` parameter.
void FindAllPasswords_aux(BlackBox& blackbox, int max_length,
                          std::string& current_password,
                          std::unordered_set<std::string>& results);