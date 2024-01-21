#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnGroupEnemy.generated.h"

class UFortAIPawnVariant;

USTRUCT(BlueprintType)
struct FSpawnGroupEnemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAIPawnVariant> EnemyVariantClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideVariantSpawnPointValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnValue;
    
    FORTNITEGAME_API FSpawnGroupEnemy();
};

