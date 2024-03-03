#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFortRarity.h"
#include "FortItemEntry.h"
#include "ItemAndCount.h"
#include "ItemGuidAndCount.h"
#include "InventoryManagementLibrary.generated.h"

class AFortPlayerController;
class IFortInventoryOwnerInterface;
class UFortInventoryOwnerInterface;
class UFortControllerComponent_InventoryNetworkManagement;
class UFortItemDefinition;
class UFortWorldItem;

UCLASS(Blueprintable)
class FORTNITEGAME_API UInventoryManagementLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInventoryManagementLibrary();
    UFUNCTION(BlueprintCallable)
    static void SwapItems(TScriptInterface<IFortInventoryOwnerInterface> SourceOwner, TScriptInterface<IFortInventoryOwnerInterface> TargetOwner, TArray<FItemGuidAndCount> ItemGuids);
    
    UFUNCTION(BlueprintCallable)
    static bool SwapItem(TScriptInterface<IFortInventoryOwnerInterface> SourceOwner, TScriptInterface<IFortInventoryOwnerInterface> TargetOwner, FGuid ItemGuid, int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveItems(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, TArray<FItemGuidAndCount> Items);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool RemoveItem(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, FGuid ItemGuid, int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool GiveItemEntryToInventoryOwner(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, const FFortItemEntry& ItemInstance);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemsFromInventoryOwnerForRarity(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, TArray<UFortWorldItem*>& Items, const EFortRarity RarityType);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemsFromInventoryOwner(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, TArray<UFortWorldItem*>& Items);
    
    UFUNCTION(BlueprintCallable)
    static UFortControllerComponent_InventoryNetworkManagement* GetInventoryNetworkComponent(AFortPlayerController* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddItems(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, TArray<FItemAndCount> Items);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool AddItem(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, const UFortItemDefinition* ItemDefinition, int32 Count);
    
};

