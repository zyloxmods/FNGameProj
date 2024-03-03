#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortMontageInputType.h"
#include "FortMontageInputAction.generated.h"

USTRUCT(BlueprintType)
struct FFortMontageInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TriggerAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMontageInputType InputType;
    
    FORTNITEGAME_API FFortMontageInputAction();
};

