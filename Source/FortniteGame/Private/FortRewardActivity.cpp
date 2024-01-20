#include "FortRewardActivity.h"

FFortRewardActivity::FFortRewardActivity() {
    this->ActivityType = EFortRewardActivityType::General;
    this->RewardDisplayTime = 0.00f;
    this->ActivityCompletionResult = EFortCompletionResult::Win;
    this->AdditionalCompletionMissionPoints = 0;
}

