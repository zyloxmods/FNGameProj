#include "FortAthenaMutator_StormVehicleHelper.h"

void AFortAthenaMutator_StormVehicleHelper::OnPlaylistDataLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

AFortAthenaMutator_StormVehicleHelper::AFortAthenaMutator_StormVehicleHelper() {
    this->EventName = TEXT("FSGA01");
    this->WallHeight = 1;
}

