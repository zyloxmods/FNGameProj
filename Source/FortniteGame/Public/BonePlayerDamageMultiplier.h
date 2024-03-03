#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "BonePlayerDamageMultiplier.generated.h"

USTRUCT(BlueprintType)
struct FBonePlayerDamageMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DamageMultiplier;
    
    FORTNITEGAME_API FBonePlayerDamageMultiplier();
};

