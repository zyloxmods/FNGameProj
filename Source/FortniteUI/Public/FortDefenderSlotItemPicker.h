#pragma once
#include "CoreMinimal.h"
#include "EInventoryContentSortType.h"
#include "EFortDefenderSlotType.h"
#include "FortItemPickerBase.h"
#include "FortDefenderSlotItemPicker.generated.h"

class UFortDefenderItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDefenderSlotItemPicker : public UFortItemPickerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortDefenderSlotType DefenderSlotType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInventoryContentSortType> SortTypesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryContentSortType CurrentSortType;
    
public:
    UFortDefenderSlotItemPicker();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSortType(EInventoryContentSortType SortType);
    
public:
    UFUNCTION(BlueprintCallable)
    void PopulateDefenderSlotItems(const UFortDefenderItem* DefenderItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentSortTypeChanged(EInventoryContentSortType SortType);
    
    UFUNCTION(BlueprintCallable)
    void NextSortType();
    
};

