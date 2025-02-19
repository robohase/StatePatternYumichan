#include "StatePatternYumichan.h"

StatePatternYumichan::StatePatternYumichan() :state(new OrdinaryState) {}

std::string StatePatternYumichan::morning_greet() const {
    return this->state->morning_greet();
}

std::string StatePatternYumichan::get_protection_for_cold() const {
    return this->state->get_protection_for_cold();
}

void StatePatternYumichan::has_a_cold() {
    this->change_state(new BadMoodState);
}

void StatePatternYumichan::is_over_her_cold() {
    this->change_state(new OrdinaryState);
}

void StatePatternYumichan::change_state(State * state) {
    delete this->state;	
    this->state = state;
}