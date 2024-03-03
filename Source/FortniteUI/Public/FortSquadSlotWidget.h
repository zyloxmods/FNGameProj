#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "EFortItemCardSize.h"
#include "FortSquadSlotWidget.generated.h"

class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UFortItem;
class UFortMultiSizeItemCard;
class ULocalPlayer;

UCLASS(Blueprintable)
class UFortSquadSlotWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCardSize ItemCardSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeItemCard* SlottedItemCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemViewContextInterface> ItemViewContext;
    
public:
    UFortSquadSlotWidget();
    UFUNCTION(BlueprintCallable)
    void SetIdOfSquadSlotToManageBP(const FName SquadId, const int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCardSize(const EFortItemCardSize CardSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadSlotLockedBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemInSquadSlotBP(const ULocalPlayer* LocalPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIdOfSquadSlotToManageBP(FName OutSquadId, int32& OutSquadSlotIndex) const;
    
};

