#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "FortNavAgentCostData.generated.h"

class UNavArea;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortNavAgentCostData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NavAgentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UNavArea>> NavAreaStrengthBuckets;
    
public:
    UFortNavAgentCostData();
};

