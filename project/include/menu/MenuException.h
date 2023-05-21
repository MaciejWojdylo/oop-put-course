//
// Created by mjwoj on 21.05.2023.
//

#ifndef PROJEKTNAOBIEK_MENUEXCEPTION_H
#define PROJEKTNAOBIEK_MENUEXCEPTION_H

#endif //PROJEKTNAOBIEK_MENUEXCEPTION_H

#include <stdexcept>
#include <string>
class MenuException : public std::runtime_error {
    public:
        explicit MenuException(const std::string& message)
        : std::runtime_error(message) {}
};