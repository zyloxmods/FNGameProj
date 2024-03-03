#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueNotify_Loop.h"
#include "GameplayCueNotify_BaconSnack_State.generated.h"

class AFortPlayerPawn;
class UFortAthenaAlertStateComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AGameplayCueNotify_BaconSnack_State : public AFortGameplayCueNotify_Loop {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StealthMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StealthMeterTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAlertStateComponent* CachedAlertStateComp;
    
public:
    AGameplayCueNotify_BaconSnack_State();
};

