#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "ConsumeEffectData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FConsumeEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> EffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Level;
    
    FORTNITEGAME_API FConsumeEffectData();
};

