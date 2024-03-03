#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "GGWidgetBase.h"
#include "GGInventoryWidgetBase.generated.h"

class UFortWeaponItemDefinition;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UGGInventoryWidgetBase : public UGGWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponItemDefinition* NextItemToDisplay;
    
public:
    UGGInventoryWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWidgetForNewWeapon(UTexture2D* Texture, EFortRarity Rarity);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerNewWeapon(UFortWeaponItemDefinition* NewWeapon);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LastWeaponReached();
    
};

