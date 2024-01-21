#pragma once
#include "CoreMinimal.h"
#include "EAthenaCustomizationCategory.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "AthenaCustomizationScreenBase.generated.h"

class UAthenaCosmeticAccountItem;
class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCustomizationScreenBase : public UFortActivatablePanelWithItemPreview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryDisplayNames[18];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemTypeDisplayNames[18];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LastProfileRev;
    
public:
    UAthenaCustomizationScreenBase();
    UFUNCTION(BlueprintCallable)
    void ShiftItemsVariantOption(UAthenaCosmeticAccountItem* Item, int32 VariantChannelIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessLoadoutChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleLoadoutChanged();
    
    UFUNCTION()
    void HandleInventoryUpdated(const TSet<FString>& ItemChangeFlags, int64 ProfileRevision);
    
public:
    UFUNCTION(BlueprintCallable)
    FText GetItemTypeDisplayNames(EAthenaCustomizationCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    UFortItem* GetFavoriteItemForCategory(EAthenaCustomizationCategory CustomizationType, int32 SubslotIndex);
    
    UFUNCTION(BlueprintCallable)
    FText GetCategoryDisplayName(EAthenaCustomizationCategory InCategory);
    
};

