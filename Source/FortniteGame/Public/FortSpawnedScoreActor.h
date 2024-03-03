#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortLevelSpawnActor.h"
#include "FortSpawnedScoreActor.generated.h"

class APlayerState;

UCLASS(Abstract, Blueprintable)
class AFortSpawnedScoreActor : public AFortLevelSpawnActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    AFortSpawnedScoreActor();
    UFUNCTION(BlueprintCallable)
    void OnScoreActorCollected(APlayerState* PlayerState);
    
};

