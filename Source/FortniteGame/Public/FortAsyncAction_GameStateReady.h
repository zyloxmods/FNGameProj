#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameStateReadyAsyncDelegateDelegate.h"
#include "FortAsyncAction_GameStateReady.generated.h"

class UFortAsyncAction_GameStateReady;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_GameStateReady : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStateReadyAsyncDelegate OnReady;
    
    UFortAsyncAction_GameStateReady();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_GameStateReady* GameStateReadyAsync(UObject* WorldContextObject);
    
};

