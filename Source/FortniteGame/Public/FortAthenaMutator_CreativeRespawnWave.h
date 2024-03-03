#pragma once
#include "CoreMinimal.h"
#include "ECreativeRespawnWaveType.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_CreativeRespawnWave.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_CreativeRespawnWave : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreativeRespawnWaveType RespawnWaveType;
    
public:
    AFortAthenaMutator_CreativeRespawnWave();
};

