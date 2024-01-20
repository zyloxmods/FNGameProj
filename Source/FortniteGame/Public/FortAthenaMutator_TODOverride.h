#pragma once
#include "CoreMinimal.h"
#include "EAthenaTimeOfDayOverride.h"
#include "FortAthenaMutator.h"
#include "TimeOfDayPhase.h"
#include "TimeOfDaySpeed.h"
#include "FortAthenaMutator_TODOverride.generated.h"

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
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimeOfDayPhase> TimeOfDayPhases;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimeOfDaySpeed> TimeOfDaySpeeds;
    
public:
    AFortAthenaMutator_TODOverride();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetTimeOfDaySpeedNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetTimeOfDayPhaseNames() const;
    
};

