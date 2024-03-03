#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "OnItemAddedDelegateDelegate.h"
#include "OnItemRemovedDelegateDelegate.h"
#include "OnViewTargetInventoryUpdatedDelegateDelegate.h"
#include "FortInventorySubsystem.generated.h"

class AFortPlayerController;
class UFortItem;
class UFortWorldItem;

UCLASS(Blueprintable)
class UFortInventorySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemAddedDelegate OnItemAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemRemovedDelegate OnItemRemovedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnViewTargetInventoryUpdatedDelegate OnViewTargetInventoryUpdatedDelegate;
    
public:
    UFortInventorySubsystem();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItem* GetViewTargetItemForActionTag(const AFortPlayerController* OwningPlayerController, const FGameplayTag ActionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItem* GetItemForActionTag(const AFortPlayerController* OwningPlayerController, const FGameplayTag ActionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetActionTagForItem(const UFortItem* Item) const;
    
};

