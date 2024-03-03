#pragma once
#include "CoreMinimal.h"
#include "FortAthenaVehicleDashboardWidget.h"
#include "FortAthenaVehicleDashboardWidget_Valet.generated.h"

class AFortDagwoodVehicle;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaVehicleDashboardWidget_Valet : public UFortAthenaVehicleDashboardWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
public:
    UFortAthenaVehicleDashboardWidget_Valet();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVehicleUsesRechargableBoost(bool bUsesRechargeableBoost);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValetNameUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateRechargeableBoostPercent(float BoostPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRPMChanged(float NormalizedRPM);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRechargableBoostFilled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortDagwoodVehicle* GetDagwoodVehicle() const;
    
};

