#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EFortAttributeDisplay.h"
#include "EFortStatDisplayType.h"
#include "FortGameplayEffectModifierDescription.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayEffectModifierDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ModAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortAttributeDisplay::Type> MagnitudeFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortStatDisplayType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    FORTNITEGAME_API FFortGameplayEffectModifierDescription();
};

