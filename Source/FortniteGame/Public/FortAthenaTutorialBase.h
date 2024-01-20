#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "FortAthenaTutorialBase.generated.h"

UCLASS(Blueprintable)
class AFortAthenaTutorialBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultHUDElementTags;
    
    AFortAthenaTutorialBase();
};

