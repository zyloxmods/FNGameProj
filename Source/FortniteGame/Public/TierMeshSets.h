#pragma once
#include "CoreMinimal.h"
#include "MeshSet.h"
#include "TierMeshSets.generated.h"

USTRUCT(BlueprintType)
struct FTierMeshSets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshSet> MeshSets;
    
    FORTNITEGAME_API FTierMeshSets();
};

