#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EAIHotSpotSlot.h"
#include "AIHotSpotSlot.generated.h"

class AAIController;
class AAIHotSpot;

UCLASS(Blueprintable, EditInlineNew)
class UAIHotSpotSlot : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LocalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceToFocusActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasCachedAgentData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasOverlappingSlots: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasDistanceToFocusActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsBlockingOthers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAIHotSpotSlot SlotState;
    
public:
    UAIHotSpotSlot();
    UFUNCTION(BlueprintCallable)
    void SetSlotState(EAIHotSpotSlot NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotOwnerAndState(AAIController* NewOwner, EAIHotSpotSlot NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(AAIController* SlotOwner, EAIHotSpotSlot NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    bool IsAIAllowed(const AAIController* AI) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUserId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotUserId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIHotSpotSlot GetSlotState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetSlotRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlotRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIController* GetSlotOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSlotLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlotHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetSlotBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIHotSpot* GetHotSpot() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSlot();
    
};

