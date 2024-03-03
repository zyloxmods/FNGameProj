#pragma once
#include "CoreMinimal.h"
#include "ValidPlacementPair.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FValidPlacementPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlacementValid;
    
    FORTNITEGAME_API FValidPlacementPair();
};

