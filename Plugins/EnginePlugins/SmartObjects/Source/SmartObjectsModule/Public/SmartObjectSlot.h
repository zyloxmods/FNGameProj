#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SmartObjectSlot.generated.h"

class UGameplayBehaviorConfig;

USTRUCT(BlueprintType)
struct SMARTOBJECTSMODULE_API FSmartObjectSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayBehaviorConfig* BehaviorConfig;
    
    FSmartObjectSlot();
};

