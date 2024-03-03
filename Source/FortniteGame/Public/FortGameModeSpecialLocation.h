#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "FortGameModeSpecialLocation.generated.h"

UCLASS(Blueprintable)
class AFortGameModeSpecialLocation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    AFortGameModeSpecialLocation();
};

