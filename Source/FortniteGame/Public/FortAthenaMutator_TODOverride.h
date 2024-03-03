#pragma once
#include "CoreMinimal.h"
#include "EAthenaFogDensityOverride.h"
#include "EAthenaLightIntensityOverride.h"
#include "EAthenaTODColor.h"
#include "EAthenaTODPostProcess.h"
#include "EAthenaTimeOfDayOverride.h"
#include "FortAthenaMutator.h"
#include "TimeOfDayPhase.h"
#include "TimeOfDaySpeed.h"
#include "FortAthenaMutator_TODOverride.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Game)
class AFortAthenaMutator_TODOverride : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaTimeOfDayOverride TimeOfDayOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaLightIntensityOverride LightIntensityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaTODColor LightColorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaFogDensityOverride FogDensityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaTODColor FogColorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaTODPostProcess PostProcessOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimeOfDayPhase> TimeOfDayPhases;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimeOfDaySpeed> TimeOfDaySpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> PostProcessOverrideActors;
    
public:
    AFortAthenaMutator_TODOverride();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetTimeOfDaySpeedNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetTimeOfDayPhaseNames() const;
    
};

