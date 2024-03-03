#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnPickupEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpawnPickupEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PickupClass;
    
    FORTNITEGAME_API FSpawnPickupEntry();
};

