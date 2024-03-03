#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BuildingProp.h"
#include "BuildingProp_VendingMachine.generated.h"

class AFortVolume;
class APlayerState;

UCLASS(Blueprintable)
class ABuildingProp_VendingMachine : public ABuildingProp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedItemRotationDamageTags;
    
public:
    ABuildingProp_VendingMachine();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerInventoryChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCycleToNextItem();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerEnterVolume(APlayerState* Client, AFortVolume* Volume);
    
};

