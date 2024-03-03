#include "FortRewardNotificationData.h"

bool UFortRewardNotificationData::GetIconBrush(FSlateBrush& IconBrush, TEnumAsByte<EFortBrushSize::Type> BrushSize) {
    return false;
}

UFortRewardNotificationData::UFortRewardNotificationData() {
    this->RewardType = EFrontEndRewardType::Mission;
}

