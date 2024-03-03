#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueNotify_Loop.h"
#include "FortGameplayCueNotifyAthena_AIAlertState.generated.h"

class UFortAthenaAlertStateComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortGameplayCueNotifyAthena_AIAlertState : public AFortGameplayCueNotify_Loop {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomPrimitiveDataFloatIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthMeterStartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentStealthMeterPctFilled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAlertStateComponent* CachedAlertStateComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CachedMeshComp;
    
public:
    AFortGameplayCueNotifyAthena_AIAlertState();
};

