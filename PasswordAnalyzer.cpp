#include "PasswordAnalyzer.h"

PasswordAnalyzer::PasswordAnalyzer(const Password& password) : password(password) {}

int PasswordAnalyzer::score() const {
    int score = 0;
    if(password.hasSpecialCharacter()) score += 20;
    if(password.hasNumber()) score += 20;
    if(password.hasUpperCaseLetter()) score += 20;
    if(password.hasLowerCaseLetter()) score += 20;
    if(password.length() > 8) score += 20;
    return score;
}

std::string PasswordAnalyzer::feedback() const {
    std::string feedback;
    if(!password.hasSpecialCharacter())
        feedback += "Password should have at least one special character.\n";
    if(!password.hasNumber())
        feedback += "Password should have at least one number.\n";
    if(!password.hasUpperCaseLetter())
        feedback += "Password should have at least one uppercase letter.\n";
    if(!password.hasLowerCaseLetter())
        feedback += "Password should have at least one lowercase letter.\n";
    if(password.length() <= 8)
        feedback += "Password should be longer than 8 characters.\n";
    
    if(feedback.empty())
        feedback = "Password is strong.\n";

    return feedback;
}
