#include "Password.h"
#include <cctype> // for isdigit, isupper, islower

Password::Password(const std::string& password) : password(password) {}

bool Password::hasSpecialCharacter() const {
    for (char c : password) {
        if (std::ispunct(c)) {
            return true;
        }
    }
    return false;
}

bool Password::hasNumber() const {
    for (char c : password) {
        if (std::isdigit(c)) {
            return true;
        }
    }
    return false;
}

bool Password::hasUpperCaseLetter() const {
    for (char c : password) {
        if (std::isupper(c)) {
            return true;
        }
    }
    return false;
}

bool Password::hasLowerCaseLetter() const {
    for (char c : password) {
        if (std::islower(c)) {
            return true;
        }
    }
    return false;
}

int Password::length() const {
    return password.length();
}
