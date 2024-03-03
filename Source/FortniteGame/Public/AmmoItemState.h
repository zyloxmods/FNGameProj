#pragma once
#include "CoreMinimal.h"
#include "AmmoItemState.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FAmmoItemState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* AmmoItemDefintion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoLoadedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoMaxCount;
    
    FORTNITEGAME_API FAmmoItemState();
};

