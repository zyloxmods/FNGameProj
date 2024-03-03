#pragma once
#include "CoreMinimal.h"
#include "FortWeaponReticleExtensionWidgetBase.h"
#include "FortChargedWeaponReticleExtensionWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortChargedWeaponReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateFrequencySecs;
    
public:
    UFortChargedWeaponReticleExtensionWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateChargeDisplay(float ChargePercent);
    
};

