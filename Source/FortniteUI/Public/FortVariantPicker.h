#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "FortVariantFilterContext.h"
#include "FortVariantPicker.generated.h"

class UAthenaCosmeticAccountItem;
class UAthenaCosmeticItemDefinition;
class UAthenaVariantPickerConfig;
class UCommonActionWidget;
class UCommonButton;
class UCommonButtonGroup;
class UCommonTextBlock;
class UDynamicEntryBox;
class UFortVariantEntryBox;
class UHorizontalBox;
class UScrollBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortVariantPicker : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaVariantPickerConfig* ConfigurationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrimaryTabLeftAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrimaryTabRightAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SecondaryTabLeftAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SecondaryTabRightAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Variants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVariantEntryBox* EntryBox_VariantOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVariantEntryBox* EntryBox_VariantOptions_NoScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Container_Tabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_PrimaryTabNav;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PrimaryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_PrimaryTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* ActionWidget_PrimaryTabLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* ActionWidget_PrimaryTabRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* PrimaryTabButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Container_SecondaryTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SecondaryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_SecondaryTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* ActionWidget_SecondaryTabLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* ActionWidget_SecondaryTabRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* SecondaryTabButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortVariantFilterContext FilterContext;
    
public:
    UFortVariantPicker();
    UFUNCTION(BlueprintCallable)
    void InitFromCosmeticItemDef(UAthenaCosmeticItemDefinition* InCosmeticItemDef);
    
    UFUNCTION(BlueprintCallable)
    void InitFromCosmeticItem(UAthenaCosmeticAccountItem* InCosmeticItem);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSecondaryTabSelectionChanged(UCommonButton* TabButton, int32 TabIdx);
    
    UFUNCTION(BlueprintCallable)
    void HandlePrimaryTabSelectionChanged(UCommonButton* TabButton, int32 TabIdx);
    
    UFUNCTION(BlueprintCallable)
    void Campaign_HandleSecondaryTabRight(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void Campaign_HandleSecondaryTabLeft(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void Campaign_HandlePrimaryTabRight(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void Campaign_HandlePrimaryTabLeft(bool& bPassThrough);
    
};

