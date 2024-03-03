#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EFortCollectionBookState.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortCollectionBookSectionTileWidget.generated.h"

class UCommonTextBlock;
class UFortAccountItem;
class UFortCollectionBookGenericRewardWidget;
class UFortCollectionBookSection;
class UFortCollectionBookSlotWidget;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookSectionTileWidget : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortCollectionBookSlotWidget> SlotWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin SlotWidgetPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> SlotWidgetHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> SlotWidgetVerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumSlotsSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SlotBoxWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* SectionNameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookGenericRewardWidget* SectionRewardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookSection* AssociatedSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCollectionBookSlotWidget*> SlotWidgets;
    
public:
    UFortCollectionBookSectionTileWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, EFortCollectionBookState SectionState);
    
    UFUNCTION(BlueprintCallable)
    void OnItemUnslotted(const UFortAccountItem* ItemUnslotted, const UFortAccountItem* OldSlottedItem, FName SlotId);
    
    UFUNCTION(BlueprintCallable)
    void OnItemSlotted(const UFortAccountItem* ItemSlotted, FName SlotId);
    
    
    // Fix for true pure virtual functions not being implemented
};

