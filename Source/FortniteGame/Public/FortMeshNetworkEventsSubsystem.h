#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EMeshNetworkNodeType.h"
#include "EventResponderTrackingItem.h"
#include "MeshNetworkEventStateData.h"
#include "OnMeshNetworkEventBurstDelegate.h"
#include "OnMeshNetworkEventChangeDelegate.h"
#include "OnMeshNetworkEventEndDelegate.h"
#include "OnMeshNetworkEventStartDelegate.h"
#include "FortMeshNetworkEventsSubsystem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMeshNetworkEventsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshNetworkEventBurst OnMeshNetworkEventBurst;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshNetworkEventStart OnMeshNetworkEventStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshNetworkEventChange OnMeshNetworkEventChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshNetworkEventEnd OnMeshNetworkEventEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventResponderTrackingItem> EventResponderList;
    
public:
    UFortMeshNetworkEventsSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeshNetworkEventActive(const FName EventName, const FGameplayTagContainer& Filters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMeshNetworkNodeType GetMeshNetworkNodeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActiveMeshNetworkEvents(TArray<FMeshNetworkEventStateData>& ActiveMeshNetworkEvents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActiveMeshNetworkEvent(FMeshNetworkEventStateData& OutEventData, const FName EventName, const FGameplayTagContainer& EventFilters) const;
    
};

