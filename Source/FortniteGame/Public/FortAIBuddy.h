#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortAIPawn.h"
#include "FortBuddyTagListener.h"
#include "FortAIBuddy.generated.h"

class AActor;
class AFortPlayerPawn;
class UFortWorldItemDefinition;

UCLASS(Blueprintable)
class AFortAIBuddy : public AFortAIPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* ConsumableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ConsumableItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* DrainPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* DrainItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DrainItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DrainItemTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBuddyTagListener> TagListeners;
    
public:
    AFortAIBuddy();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopItemDrain();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool StartItemDrain(AFortPlayerPawn* PlayerPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveTagListener(AActor* TargetActor, const FGameplayTag Tag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListenTagRemoved(const AActor* TargetActor, const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListenTagAdded(const AActor* TargetActor, const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemsDrained(const AFortPlayerPawn* PlayerPawn, int32 ItemsDrained);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemsConsumed(const AFortPlayerPawn* PlayerPawn, int32 ItemsConsumed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetInteractionString(const AFortPlayerPawn* PlayerPawn) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTagListener(AActor* TargetActor, const FGameplayTag Tag);
    
};

