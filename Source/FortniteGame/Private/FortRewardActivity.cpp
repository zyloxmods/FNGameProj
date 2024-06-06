#include "FortRewardActivity.h"

FFortRewardActivity::FFortRewardActivity() {
    ActivityType = EFortRewardActivityType::General;
    RewardDisplayTime = 1;
    ActivityCompletionResult = EFortCompletionResult::Win;
    AdditionalCompletionMissionPoints = 0;
}

