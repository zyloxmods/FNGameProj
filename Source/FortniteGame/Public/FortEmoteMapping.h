#pragma once
#include "CoreMinimal.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomGender.h"
#include "FortEmoteMapping.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FFortEmoteMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomBodyType::Type> BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> EmoteMontage;
    
    FORTNITEGAME_API FFortEmoteMapping();
};

