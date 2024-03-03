#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortItemListOptionBucket.h"
#include "FortMatchmakingKnobsModal.h"
#include "OnFilterListCompletedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeMessageKnobsDialog.generated.h"

class UObject;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeMessageKnobsDialog : public UFortMatchmakingKnobsModal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> LegacyEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> AdvancedEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortItemListOptionBucket> ItemListOptionBuckets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFilterListCompleted OnFilterListCompleted;
    
public:
    UFortCreativeMessageKnobsDialog();
protected:
    UFUNCTION(BlueprintCallable)
    void ShrinkViewPort(float InterpolationTime);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusToItem(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void ResetViewPort(float InterpolationTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveTagFilter(bool UpdateSelection);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStringFilter(bool UpdateSelection);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIsModifiedFilter(bool UpdateSelection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyFilterActive();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleClearItemsClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCount() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateFilteredEntries(bool UpdateSelection);
    
    UFUNCTION(BlueprintCallable)
    void FilterEntriesByTag(FGameplayTagContainer Tags, bool UpdateSelection);
    
    UFUNCTION(BlueprintCallable)
    void FilterEntriesByString(const FString& FilterString, bool UpdateSelection);
    
    UFUNCTION(BlueprintCallable)
    void FilterEntriesByIsModified(bool bShowUnmodifiedEntries, bool UpdateSelection);
    
    UFUNCTION(BlueprintCallable)
    void DisableFilters();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsItem() const;
    
};

