#include "FortHomebaseNodeItemUtilities.h"

bool UFortHomebaseNodeItemUtilities::IsSquadSlotUnseen(AFortPlayerController* FortPC, const FName SquadId, const int32 SquadSlot) {
    return false;
}

bool UFortHomebaseNodeItemUtilities::IsHomebaseNodeItemUnseenForTagContainer(AFortPlayerController* FortPC, const FGameplayTagContainer& Tags) {
    return false;
}

FString UFortHomebaseNodeItemUtilities::GetHomebaseNodeItemNameForTagContainer(AFortPlayerController* FortPC, const FGameplayTagContainer& Tags) {
    return TEXT("");
}

UFortHomebaseNodeItem* UFortHomebaseNodeItemUtilities::GetHomebaseNodeItemForTagContainer(AFortPlayerController* FortPC, const FGameplayTagContainer& Tags) {
    return NULL;
}

UFortHomebaseNodeItem* UFortHomebaseNodeItemUtilities::GetHomebaseNodeItemForSquadSlot(AFortPlayerController* FortPC, const FName SquadId, const int32 SquadSlot) {
    return NULL;
}

bool UFortHomebaseNodeItemUtilities::AreAnyHomebaseNodeItemsUnseenForSquadType(AFortPlayerController* FortPC, const EFortHomebaseSquadType SquadType) {
    return false;
}

bool UFortHomebaseNodeItemUtilities::AreAnyHomebaseNodeItemsUnseenForSquadId(AFortPlayerController* FortPC, const FName SquadId) {
    return false;
}

UFortHomebaseNodeItemUtilities::UFortHomebaseNodeItemUtilities() {
}

