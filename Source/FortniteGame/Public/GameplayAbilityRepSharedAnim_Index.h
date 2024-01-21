#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityRepSharedAnim_Base.h"
#include "GameplayAbilityRepSharedAnim_Index.generated.h"

USTRUCT(BlueprintType)
struct FGameplayAbilityRepSharedAnim_Index : public FGameplayAbilityRepSharedAnim_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MontageIndex;
    
    FORTNITEGAME_API FGameplayAbilityRepSharedAnim_Index();
};

