#include "VoteRuntime.h"

FVoteRuntime::FVoteRuntime() {
    this->WorldRef = NULL;
    this->VoteState = EVoteState::None;
    this->Shadow_VoteState = EVoteState::None;
}

