#pragma once
#include "CoreMinimal.h"
#include "HeadPartAnimInstance.h"
#include "CustomCharacterPartAnimInstance_SlurpLegendsBase.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, NonTransient)
class UCustomCharacterPartAnimInstance_SlurpLegendsBase : public UHeadPartAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MorphBlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PartMID;
    
    UCustomCharacterPartAnimInstance_SlurpLegendsBase();
};

