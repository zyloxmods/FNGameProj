#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FortItemEntry.h"
#include "FortItemEntryComponent.generated.h"

class IFortInventoryOwnerInterface;
class UFortInventoryOwnerInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortItemEntryComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemEntry OwnedItemEntry;
    
public:
    UFortItemEntryComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 TrySetLoadedAmmo(int32 NewAmmoAmount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TakeItemFromInventoryOwner(const FGuid& ItemGuid, const int32 Count, TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, const bool bTreatAsPickup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOwnedItem(const FFortItemEntry& Item);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasItem() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FFortItemEntry GetOwnedItem() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetLoadedAmmo() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetClipSize() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Empty();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AddItemToInventoryOwner(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner);
    
};

