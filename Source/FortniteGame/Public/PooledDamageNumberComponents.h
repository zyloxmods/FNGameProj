#pragma once
#include "CoreMinimal.h"
#include "PooledDamageNumberComponents.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FPooledDamageNumberComponents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Components;
    
    FORTNITEGAME_API FPooledDamageNumberComponents();
};

