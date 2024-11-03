#pragma once

#include "OrdinaryState.h"
#include "BadMoodState.h"

class StatePatternYumichan {
public:
    StatePatternYumichan();

/*
*********************************************
* Function
**********************************************
*/
public:
    /*!
    * @brief 朝の挨拶を返す
    * @retuen 朝の挨拶
    */
    std::string morning_greet() const;

    /*!
    * @brief 防寒対策を返す
    * @retuen 防寒対策
    */
    std::string get_protection_for_cold() const;

    /*!
    * @brief 風邪をひく
    */
    void has_a_cold();

    /*!
    * @brief 風邪が治る
    */
    void is_over_her_cold();

private:
    /*!
    * @brief ご機嫌を変更する
    */
    void change_state(State * state);

/*
*********************************************
* Variable
**********************************************
*/
private:
    State * state;

};