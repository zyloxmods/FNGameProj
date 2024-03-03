#pragma once
#include "CoreMinimal.h"
#include "FortMantisMontageData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FFortMantisMontageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    MANTISRUNTIME_API FFortMantisMontageData();
};

