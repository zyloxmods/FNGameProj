#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAIPawnUpgradeProbability.h"
#include "FortAISpawnGroupUpgradeProbabilities.generated.h"

UCLASS(Blueprintable)
class UFortAISpawnGroupUpgradeProbabilities : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGuaranteedUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIPawnUpgradeProbability> UpgradeProbabilities;
    
public:
    UFortAISpawnGroupUpgradeProbabilities();
};

