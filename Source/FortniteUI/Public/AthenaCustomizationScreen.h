#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAthenaCustomizationCategory.h"
#include "AthenaCustomizationParams.h"
#include "FortItemPreviewScreen.h"
#include "Templates/SubclassOf.h"
#include "AthenaCustomizationScreen.generated.h"

class UAthenaCosmeticAccountItem;
class UAthenaItemSelectorScreenBase;
class UFortCosmeticLoadoutSelector;
class UFortItem;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCustomizationScreen : public UFortItemPreviewScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomizationSelectionBeingProcessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaCustomizationParams CustomizationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaCustomizationCategory InitialCustomizationCategory;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryDisplayNames[22];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemTypeDisplayNames[22];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaItemSelectorScreenBase> ItemSelectorScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaItemSelectorScreenBase* ItemSelectorScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle OpenNameLoadoutInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BoundAnim_Intro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BoundAnim_Outro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticLoadoutSelector* LoadoutSelector;
    
public:
    UAthenaCustomizationScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void ShowLockerSlot(EAthenaCustomizationCategory CustomizationCategory, int32 SlotIndex, bool bCanShowEmpty);
    
    UFUNCTION(BlueprintCallable)
    void ShiftItemsVariantOption(UAthenaCosmeticAccountItem* Item, int32 VariantChannelIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizationSelectionBeingProcessed(bool bIsBeingProcessed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutChanged();
    
    UFUNCTION(BlueprintCallable)
    FText GetItemTypeDisplayNames(EAthenaCustomizationCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    UFortItem* GetFavoriteItemForCategory(EAthenaCustomizationCategory CustomizationType, int32 SubslotIndex);
    
    UFUNCTION(BlueprintCallable)
    FText GetCategoryDisplayName(EAthenaCustomizationCategory InCategory);
    
};

