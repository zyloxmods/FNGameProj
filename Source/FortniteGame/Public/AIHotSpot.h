#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTaskOwnerInterface.h"
#include "EAIHotSpotAssignmentFilter.h"
#include "EAIHotSpotSlot.h"
#include "EAIHotSpotSlotFilter.h"
#include "Templates/SubclassOf.h"
#include "AIHotSpot.generated.h"

class AAIController;
class UAIHotSpotSlot;
class UAIHotSpotSlotGenerator;
class UBillboardComponent;
class UNavigationQueryFilter;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AAIHotSpot : public AActor, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIHotSpotSlot*> UserSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIHotSpotSlotGenerator* SlotGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIHotSpotSlot*> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FocusActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CustomNavmeshSearchExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowSlotlessAssignment: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowClaimingMultipleSlots: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTrackOverlappingSlots: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProjectSlotsOnNavmesh: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCustomNavmeshSearchExtent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIController*> NoSlotAssignees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RenderingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SpriteComponent;
    
public:
    AAIHotSpot();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveGroupFromHotspot(TArray<AAIController*> GroupOfAI);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFromHotspot(AAIController* AI, bool bAssignFromWaitingList);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnSlotOccupied(AAIController* AI, int32 Index, int32 UserId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnSlotFreed(AAIController* AI, int32 Index, int32 UserId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnSlotEnabled(int32 Index, int32 UserId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnSlotDisabled(int32 Index, int32 UserId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnSlotClaimed(AAIController* AI, int32 Index, int32 UserId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnSlotBlocked(AAIController* AI, int32 Index, int32 UserId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnRemovedSlotlessBehavior(AAIController* AI, bool bIsClamingSlot);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnRemovedBehavior(AAIController* AI, int32 Index, int32 UserId, EAIHotSpotSlot PrevState, bool bWasOnWaitingList);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnMoveToSlotFinished(AAIController* AI, int32 Index, int32 UserId, bool bResult);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnHotSpotEnabled();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnHotSpotDisabled();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    bool OnAssignedSlotlessBehavior(AAIController* AI);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    bool OnAssignedOccupiedBehavior(AAIController* AI, int32 Index, int32 UserId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    bool OnAssignedClaimedBehavior(AAIController* AI, int32 Index, int32 UserId, bool bWasOnWaitingList);
    
    UFUNCTION(BlueprintCallable)
    bool OccupySlotByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotlessAssignmentAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    bool IsAIAllowed(const AAIController* AI) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnabledSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAssignedAI(const AAIController* AI, EAIHotSpotAssignmentFilter Filter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotUserIdByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIHotSpotSlot GetSlotStateByOwner(const AAIController* AIOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIHotSpotSlot GetSlotStateByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetSlotRotationByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIController* GetSlotOwnerByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSlotLocationByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotIndexByOwner(const AAIController* AIOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotCount(EAIHotSpotSlotFilter Filter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIHotSpotSlot* GetSlotByOwner(const AAIController* AIOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIHotSpotSlot* GetSlotByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAssignedAICount(EAIHotSpotAssignmentFilter Filter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AAIController*> GetAssignedAI(EAIHotSpotAssignmentFilter Filter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> FindBestSlotIndices(TArray<AAIController*> AI) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindBestSlotIndex(AAIController* AI) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseSlotByIndex(const AAIController* AI, int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    bool AssignToSlotByIndex(AAIController* AI, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool AssignToHotspot(AAIController* AI);
    
    UFUNCTION(BlueprintCallable)
    int32 AssignGroupToHotspot(TArray<AAIController*> GroupOfAI);
    
    UFUNCTION(BlueprintCallable)
    void AssignFromWaitingList();
    
    
    // Fix for true pure virtual functions not being implemented
};

