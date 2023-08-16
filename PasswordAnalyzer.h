#ifndef PASSWORD_ANALYZER_H
#define PASSWORD_ANALYZER_H

#include "Password.h"
#include <string>

class PasswordAnalyzer {
    const Password& password;  // This reference will be "attached" to the password object when constructed.
public:
    PasswordAnalyzer(const Password& password);
    int score() const;
    std::string feedback() const;
};

#endif //PASSWORD_ANALYZER_H
