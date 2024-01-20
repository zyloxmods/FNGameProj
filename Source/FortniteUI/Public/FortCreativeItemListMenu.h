#pragma once
#include "CoreMinimal.h"
#include "FortItemEntry.h"
#include "EFortItemCardSize.h"
#include "FortActivatablePanel.h"
#include "SelectItemToSpawnDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeItemListMenu.generated.h"

class UDataTable;
class UFortCreativeItemListPanelData;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeItemListMenu : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCreativeItemListPanelData> PanelDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemListSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemListCategorySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeItemListPanelData* ItemListPanelData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectItemToSpawnDelegate OnItemSelected;
    
    UFortCreativeItemListMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemsLoaded();
    
    UFUNCTION(BlueprintCallable)
    void LoadItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTabNameFromLabel(const FText& TabLabel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCollapseBorderPadFlagForCategory(const FName& ItemListCategoryName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemCardSize GetCardSizeForCategory(const FName& ItemListCategoryName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool CanPlayerCreateInVolume(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnItemSelected(FFortItemEntry ItemToSpawn);
    
};

