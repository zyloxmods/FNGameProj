#include "FortPlayerPowerRating.h"

void UFortPlayerPowerRating::RepresentLocalPlayer() {
}





bool UFortPlayerPowerRating::HasTeamMembers() const {
    return false;
}

int32 UFortPlayerPowerRating::GetTeamPowerRating() const {
    return 0;
}

int32 UFortPlayerPowerRating::GetBasePowerRating() const {
    return 0;
}

UFortPlayerPowerRating::UFortPlayerPowerRating() {
    this->PowerRatingType = EFortPlayerPowerRatingType::Auto;
}

