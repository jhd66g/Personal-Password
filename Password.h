#ifndef PASSWORD_H
#define PASSWORD_H

#include <string>

class Password {
private:
    std::string password;
public:
    Password(const std::string& password);
    bool hasSpecialCharacter() const;
    bool hasNumber() const;
    bool hasUpperCaseLetter() const;
    bool hasLowerCaseLetter() const;
    int length() const;
};

#endif // PASSWORD_H
