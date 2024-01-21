#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Engine/DataTable.h"
#include "OnItemToRepresentChangedDelegate.h"
#include "FortItemInspectCycleWidget.generated.h"

class UFortItem;
class UFortItemInspectionScreen;
class UFortItemTileView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemInspectCycleWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemToRepresentChanged OnItemToRepresentChanged;
    
protected:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItemTileView> ItemTileView;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousItemActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextItemActionRowHandle;
    
public:
    UFortItemInspectCycleWidget();
    UFUNCTION(BlueprintCallable)
    void SetupActionHandlers();
    
    UFUNCTION(BlueprintCallable)
    void SetOwningItemInspectScreen(UFortItemInspectionScreen* ItemInspect);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(const UFortItem* NewItemToRepresent);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousItem();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextItem();
    
    UFUNCTION(BlueprintCallable)
    void SelectItemWithOffset(int32 Offset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemCycled(UFortItem* OldItem, UFortItem* NewItem, int32 OffsetFromPreviousItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemWithOffset_BP(int32 IndexOffset) const;
    
};

