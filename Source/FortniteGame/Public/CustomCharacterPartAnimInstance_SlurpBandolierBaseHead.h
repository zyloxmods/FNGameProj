#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartAnimInstance_SlurpLegendsBase.h"
#include "CustomCharacterPartAnimInstance_SlurpBandolierBaseHead.generated.h"

UCLASS(Blueprintable, NonTransient)
class UCustomCharacterPartAnimInstance_SlurpBandolierBaseHead : public UCustomCharacterPartAnimInstance_SlurpLegendsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WPOMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MorphTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateMaterialAO;
    
    UCustomCharacterPartAnimInstance_SlurpBandolierBaseHead();
};

