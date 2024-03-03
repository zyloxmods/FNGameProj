#pragma once
#include "CoreMinimal.h"
#include "EAthenaCustomizationCategory.h"
#include "EAthenaFilterDisplayType.h"
#include "FortAthenaItemManagementInventoryFilterTabLabelInfo.h"
#include "FortItemPickerBase.h"
#include "Templates/SubclassOf.h"
#include "AthenaCustomizationPicker.generated.h"

class UAthenaCosmeticAccountItem;
class UCommonButton;
class UCommonButtonStyle;
class UFortItem;
class UFortTabListWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCustomizationPicker : public UFortItemPickerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateSaveButtonVisuals);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCosmeticChangeSaveEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCosmeticChangeSaveEvent OnCosmeticSelectionSaving;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCosmeticChangeSaveEvent OnCosmeticSelectionSaved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateSaveButtonVisuals OnShowSaveButton;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateSaveButtonVisuals OnHideSaveButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButton> FilterTabButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> FilterTabButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* FilterTabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentFilterName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaCustomizationCategory CustomizeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubslotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowUnownedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCommits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneItemPerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* ItemListeningTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticAccountItem* LocalCampaignHeroItem;
    
public:
    UAthenaCustomizationPicker();
    UFUNCTION(BlueprintCallable)
    void SetFilter(const FName FilterName);
    
    UFUNCTION(BlueprintCallable)
    void SearchText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void RefreshView(bool CategoryChanging, bool FilterChanged, bool bSearchTextChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSearchEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoItemsAvailableInFilter(const FText& EmptyDisplayText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemsAvailableInFilter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSelectedItemHasChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleFilterTabSelected(FName TabNameID);
    
    UFUNCTION(BlueprintCallable)
    void HandleFilterTabButtonCreated(FName TabNameID, UCommonButton* TabButton);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentFilterSetBP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQualifiedFilterDisplayName(EAthenaFilterDisplayType InTopFilterDisplaySetting) const;
    
    UFUNCTION(BlueprintCallable)
    void EndCustomizationCategory();
    
    UFUNCTION(BlueprintCallable)
    void BeginCustomizationCategory(EAthenaCustomizationCategory Category, int32 SubslotToEdit, bool bInAllowUnownedItems, bool bInOneItemPerSlot);
    
};

