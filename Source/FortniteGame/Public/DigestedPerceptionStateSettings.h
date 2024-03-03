#pragma once
#include "CoreMinimal.h"
#include "DigestedPerceptionStateSettings.generated.h"

USTRUCT(BlueprintType)
struct FDigestedPerceptionStateSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForgetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForgetTimeDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForgetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForgetDistanceDeviation;
    
public:
    FORTNITEGAME_API FDigestedPerceptionStateSettings();
};

