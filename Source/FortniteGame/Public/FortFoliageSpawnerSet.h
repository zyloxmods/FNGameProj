#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortFoliageSpawnerSet.generated.h"

class UProceduralFoliageSpawner;

UCLASS(Blueprintable)
class UFortFoliageSpawnerSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UProceduralFoliageSpawner*> FoliageSpawners;
    
    UFortFoliageSpawnerSet();
};

