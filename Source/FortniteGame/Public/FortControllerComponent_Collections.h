#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ECollectionsComponentValidityResult.h"
#include "EFortCollectedState.h"
#include "FortControllerComponent.h"
#include "FortItemEntry.h"
#include "FortMcpCollectedFishProperties.h"
#include "FortControllerComponent_Collections.generated.h"

class APawn;
class UFortControllerComponent_Collections;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_Collections : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_Collections();
    UFUNCTION(BlueprintCallable)
    void OnFishCollected(const FFortItemEntry& ItemEntry, const FFortMcpCollectedFishProperties& FishProperties, FGameplayTag& OutFishCollectionTag, FGameplayTag& OutAnalyticsTag, EFortCollectedState& OutNewSeenState);
    
    UFUNCTION(BlueprintCallable)
    static UFortControllerComponent_Collections* GetCollectionsComponent(const APawn* Pawn, ECollectionsComponentValidityResult& OutIsValid);
    
};

