#include <iostream>
#include "StatePatternYumichan.h"

void comment(const StatePatternYumichan yumichan){
    std::cout << std::endl;
    std::cout << "　　挨拶：";
    std::cout << yumichan.morning_greet() << std::endl;
    std::cout << "防寒方法：";
    std::cout << yumichan. get_protection_for_cold() << std::endl;
}

int main () {
    StatePatternYumichan yumichan;
    // 通常時
    comment(yumichan);
    
    yumichan.has_a_cold();

    // 風邪をひいて具合が悪い時
    comment(yumichan);

    yumichan.is_over_her_cold();

    // 通常時
    comment(yumichan);
}