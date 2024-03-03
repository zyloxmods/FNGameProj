#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortWeaponBoardDisplaySlot.h"
#include "FortWeaponBoardDisplaySlotItem.h"
#include "FortWeaponBoardBase.generated.h"

class UFortAccountItem;

UCLASS(Blueprintable)
class AFortWeaponBoardBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortWeaponBoardDisplaySlot> RangedWeaponDisplaySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortWeaponBoardDisplaySlot> MeleeWeaponDisplaySlots;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortWeaponBoardDisplaySlotItem> DisplaySlotItemList;
    
public:
    AFortWeaponBoardBase();
protected:
    UFUNCTION(BlueprintCallable)
    void PopulateDisplaySlotsWithRandomWeapons();
    
    UFUNCTION(BlueprintCallable)
    void PopulateDisplaySlotsWithBestWeapons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplaySlotItemChanged(FFortWeaponBoardDisplaySlot DisplaySlot, UFortAccountItem* Item);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAsyncLoadComplete();
    
};

