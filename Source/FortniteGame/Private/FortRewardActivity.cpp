#include "FortRewardActivity.h"

FFortRewardActivity::FFortRewardActivity() {
    this->ActivityType = EFortRewardActivityType::General;
    this->RewardDisplayTime = 1;
    this->ActivityCompletionResult = EFortCompletionResult::Win;
    this->AdditionalCompletionMissionPoints = 0;
}

