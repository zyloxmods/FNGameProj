#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpawnGroupProgression.h"
#include "FortAISpawnGroupProgressionInfo.generated.h"

UCLASS(Blueprintable)
class UFortAISpawnGroupProgressionInfo : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnGroupProgression> SpawnGroups;
    
public:
    UFortAISpawnGroupProgressionInfo();
};

