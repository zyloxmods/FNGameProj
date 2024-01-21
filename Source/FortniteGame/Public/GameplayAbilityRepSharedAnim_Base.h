#pragma once
#include "CoreMinimal.h"
#include "EFortSharedAnimationState.h"
#include "GameplayAbilityRepSharedAnim_Base.generated.h"

USTRUCT(BlueprintType)
struct FGameplayAbilityRepSharedAnim_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortSharedAnimationState AnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MontageSectionToPlay;
    
    FORTNITEGAME_API FGameplayAbilityRepSharedAnim_Base();
};

