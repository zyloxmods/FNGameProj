#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortReticle.generated.h"

class AFortWeapon;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class UFortReticle : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ReticleWeaponCooldownMI;
    
public:
    UFortReticle();
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnReticleColorChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnSet();
    
    UFUNCTION(BlueprintCallable)
    void OnContextualReticleChanged();
    
};

