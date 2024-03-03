#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortStatManagerTag.h"
#include "FortAsyncAction_CosmeticAdaptiveStatWatcher.generated.h"

class AFortPlayerPawn;
class UFortAsyncAction_CosmeticAdaptiveStatWatcher;

UCLASS(Blueprintable)
class UFortAsyncAction_CosmeticAdaptiveStatWatcher : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWatchedStatChanged, FName, StatName, int32, StatValue);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWatchedStatChanged OnStatChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* MyPawn;
    
public:
    UFortAsyncAction_CosmeticAdaptiveStatWatcher();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_CosmeticAdaptiveStatWatcher* WatchCosmeticStat(AFortPlayerPawn* Pawn, FFortStatManagerTag StatTag, int32 DefaultValue);
    
};

