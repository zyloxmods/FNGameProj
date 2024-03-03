#pragma once
#include "CoreMinimal.h"
#include "HomebaseNodeState.generated.h"

USTRUCT(BlueprintType)
struct FHomebaseNodeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreCostsPayable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    FORTNITEGAME_API FHomebaseNodeState();
};

