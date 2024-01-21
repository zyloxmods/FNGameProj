#pragma once
#include "CoreMinimal.h"
#include "FortGameplayEffectModifierDescription.h"
#include "FortGameplayEffectDescription.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayEffectDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EffectDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EffectWrittenDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayEffectModifierDescription> ModDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> GrantedTagDescriptions;
    
    FORTNITEGAME_API FFortGameplayEffectDescription();
};

