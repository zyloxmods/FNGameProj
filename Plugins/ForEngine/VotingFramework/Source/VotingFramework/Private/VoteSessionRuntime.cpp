#include "VoteSessionRuntime.h"

FVoteSessionRuntime::FVoteSessionRuntime() {
    this->NetworkType = EVoteSessionNetworkType::NotDetermined;
    this->VoteSessionState = EVoteSessionState::None;
    this->WorldRef = NULL;
    this->Shadow_VoteSessionState = EVoteSessionState::None;
}

