#pragma once
#include "CoreMinimal.h"
#include "OriginalAndSpawnedPair.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FOriginalAndSpawnedPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OriginalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnedActorIsForPreview;
    
    FORTNITEGAME_API FOriginalAndSpawnedPair();
};

