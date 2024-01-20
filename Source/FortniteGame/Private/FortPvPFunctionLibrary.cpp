#include "FortPvPFunctionLibrary.h"

void UFortPvPFunctionLibrary::SetMatchLevel(UObject* WorldContextObject, int32 MatchLevel) {
}

AStrategicBuildingActor* UFortPvPFunctionLibrary::GetTeamStrategicBuildingActor(UObject* WorldContextObject, uint8 Team, const FTeamStrategicBuildingHandle& SBAHandle) {
    return NULL;
}

AFortPvPBaseCornerstone* UFortPvPFunctionLibrary::GetTeamCornerstone(UObject* WorldContextObject, uint8 Team) {
    return NULL;
}

int32 UFortPvPFunctionLibrary::GetRoundTimeAccumulated(UObject* WorldContextObject) {
    return 0;
}

int32 UFortPvPFunctionLibrary::GetMatchLevel(UObject* WorldContextObject) {
    return 0;
}

void UFortPvPFunctionLibrary::GetDifficultyRowNamesFromPvPRating(TArray<FName>& OutDifficultyRows, const float InPvPRating) {
}

AFortTeamInfoPvPBaseDestruction* UFortPvPFunctionLibrary::GetBaseDestructionTeamInfo(UObject* WorldContextObject, uint8 Team) {
    return NULL;
}

int32 UFortPvPFunctionLibrary::GetBaseBuildingCost(ABuildingActor* BuildingActor) {
    return 0;
}

void UFortPvPFunctionLibrary::FirePvPVictoryMissionEvent(UObject* WorldContextObject, uint8 InWinningTeam) {
}

void UFortPvPFunctionLibrary::DestroyAllFortPickupsWithItem(UObject* WorldContextObject, const UFortWorldItemDefinition* ItemDefinitionToCheck) {
}

UFortPvPFunctionLibrary::UFortPvPFunctionLibrary() {
}

