#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "FortItemQuantityPair.h"
#include "FortPickupEventHandler.h"
#include "GameplayFeedbackEventParams.h"
#include "BuildingProp_CaptureItemSpawner.generated.h"

class AFortPawn;
class UFortItemDefinition;
class UFortWorldItemDefinition;

UCLASS(Blueprintable)
class ABuildingProp_CaptureItemSpawner : public ABuildingProp, public IFortPickupEventHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ItemRefCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPickupWasClaimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SpecialActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCaptureEvents;
    
public:
    ABuildingProp_CaptureItemSpawner();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterSpecialActor();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SendCaptureItemFeedbackEvent(const FGameplayFeedbackEventParams& EventParams, UFortItemDefinition* ItemDefinition, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    void ResetItemRefCount();
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveItemRef();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterSpecialActor(UFortWorldItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_NotifyFeedbackEvent(const FGameplayFeedbackEventParams& EventParams, const FFortItemQuantityPair& ItemEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_NotifyFeedbackEvent(const FGameplayFeedbackEventParams& EventParams, bool bFriendlyEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTakeFlag(AFortPawn* InteractingPawn) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 AddItemRef();
    
    
    // Fix for true pure virtual functions not being implemented
};

