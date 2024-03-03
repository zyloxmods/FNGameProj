#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortSquadStartSearchParamData.h"
#include "FortCheatManager_Nitrogen.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Nitrogen : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Nitrogen();
    UFUNCTION(BlueprintCallable)
    void TeleportToSquadStartAtIndex(const int32 Index, const FFortSquadStartSearchParamData& SearchParam, FString& TeleportReasonString);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void TeleportToNitrogenSpawnActor(const int32 Index);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void TeleportToNitrogenRespawnActor(const int32 Index);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SpawnNitrogenFare(const float PickUpDistance, const float DropOffDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetNitrogenScore(const int32 Score, const uint8 ScoreReason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetNitrogenNavDestinationToCurrentLocation();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void CompleteNitrogenFare();
    
};

