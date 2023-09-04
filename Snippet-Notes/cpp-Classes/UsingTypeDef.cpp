//
// Created by Deren Bozer on 9/2/23.
//

#include "UsingTypeDef.h"
#include <string>
#include <vector>

// Creates a type of identifier
// End identifier name with "_t"
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
// Using is more popular than typedef
using number_t = int;

int main() {
    pairlist_t pairListItems;
    text_t name = "Bro";

    return 0;
}
