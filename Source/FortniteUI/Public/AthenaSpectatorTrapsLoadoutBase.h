#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaSpectatorTrapsLoadoutBase.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;
class UAthenaSpectatorInventorySlotBase;
class UFortWorldItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorTrapsLoadoutBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSpectatorInventorySlotBase*> ItemSlots;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* LastFollowedPlayer;
    
public:
    UAthenaSpectatorTrapsLoadoutBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectSlot(int32 SlotIdx);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldItemListChanged(const TArray<UFortWorldItem*>& ItemsAdded, const TArray<UFortWorldItem*>& ItemsRemoved);
    
    UFUNCTION(BlueprintCallable)
    void OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatingPC, AFortPlayerState* FollowedPlayerState);
    
};

