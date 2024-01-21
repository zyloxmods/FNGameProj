#pragma once
#include "CoreMinimal.h"
#include "SoundVariant.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSoundVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> SoundToSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> OverrideSound;
    
    FORTNITEGAME_API FSoundVariant();
};

