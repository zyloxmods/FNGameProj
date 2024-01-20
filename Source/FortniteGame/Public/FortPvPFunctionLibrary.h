#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TeamStrategicBuildingHandle.h"
#include "FortPvPFunctionLibrary.generated.h"

class ABuildingActor;
class AFortPvPBaseCornerstone;
class AFortTeamInfoPvPBaseDestruction;
class AStrategicBuildingActor;
class UFortWorldItemDefinition;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPvPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortPvPFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMatchLevel(UObject* WorldContextObject, int32 MatchLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AStrategicBuildingActor* GetTeamStrategicBuildingActor(UObject* WorldContextObject, uint8 Team, const FTeamStrategicBuildingHandle& SBAHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortPvPBaseCornerstone* GetTeamCornerstone(UObject* WorldContextObject, uint8 Team);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRoundTimeAccumulated(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMatchLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static void GetDifficultyRowNamesFromPvPRating(TArray<FName>& OutDifficultyRows, const float InPvPRating);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortTeamInfoPvPBaseDestruction* GetBaseDestructionTeamInfo(UObject* WorldContextObject, uint8 Team);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static int32 GetBaseBuildingCost(ABuildingActor* BuildingActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FirePvPVictoryMissionEvent(UObject* WorldContextObject, uint8 InWinningTeam);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroyAllFortPickupsWithItem(UObject* WorldContextObject, const UFortWorldItemDefinition* ItemDefinitionToCheck);
    
};

