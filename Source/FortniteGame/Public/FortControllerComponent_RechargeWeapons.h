#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CachedRechargeAmmoData.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_RechargeWeapons.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_RechargeWeapons : public UFortControllerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FCachedRechargeAmmoData> WeaponToRechargeDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, float> PendingGuidToServerStartTimeMap;
    
public:
    UFortControllerComponent_RechargeWeapons();
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientItemStartedRecharging(const FGuid& ItemGuid, const float InServerStartTime);
    
};

