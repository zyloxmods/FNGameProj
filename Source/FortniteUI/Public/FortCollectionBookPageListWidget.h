#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EFortCollectionBookState.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortCollectionBookPageListWidget.generated.h"

class UCommonNumericTextBlock;
class UCommonTextBlock;
class UFortAccountItem;
class UFortCollectionBookCategory;
class UFortCollectionBookPage;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookPageListWidget : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PageNameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* AvailableSlotsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PageCompletionWidget;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> AssociatedPageOrCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsExpanded;
    
public:
    UFortCollectionBookPageListWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAsPage(UFortCollectionBookPage* Page);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAsCategory(UFortCollectionBookCategory* Category);
    
    UFUNCTION(BlueprintCallable)
    void OnSlottedItemOperationComplete(const UFortAccountItem* SlottedItem, FName SlotId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots, EFortCollectionBookState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots);
    
    
    // Fix for true pure virtual functions not being implemented
};

