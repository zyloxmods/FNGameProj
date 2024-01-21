#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityRepSharedAnim_Base.h"
#include "GameplayAbilityRepSharedAnim.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FGameplayAbilityRepSharedAnim : public FGameplayAbilityRepSharedAnim_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    FORTNITEGAME_API FGameplayAbilityRepSharedAnim();
};

