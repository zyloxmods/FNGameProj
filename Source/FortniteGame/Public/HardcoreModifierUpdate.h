#pragma once
#include "CoreMinimal.h"
#include "HardcoreModifierUpdate.generated.h"

USTRUCT(BlueprintType)
struct FHardcoreModifierUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModifierId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    FORTNITEGAME_API FHardcoreModifierUpdate();
};

