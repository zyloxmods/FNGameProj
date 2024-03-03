#pragma once
#include "CoreMinimal.h"
#include "PlaysetInfo.generated.h"

class UFortPlaysetItemDefinition;

USTRUCT(BlueprintType)
struct FPlaysetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlaysetItemDefinition* Playset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 FlashCounter;
    
    FORTNITEGAME_API FPlaysetInfo();
};

