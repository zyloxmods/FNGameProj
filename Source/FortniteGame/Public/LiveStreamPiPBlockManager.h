#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LiveStreamPiPBlockManager.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULiveStreamPiPBlockManager : public UObject {
    GENERATED_BODY()
public:
    ULiveStreamPiPBlockManager();
    UFUNCTION(BlueprintCallable)
    static void SetPlayerBlocked(bool bInBlocked, bool bInOutsideBlocked);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerBlocked();
    
    UFUNCTION(BlueprintCallable)
    static bool IsOutSideBlocked();
    
};

