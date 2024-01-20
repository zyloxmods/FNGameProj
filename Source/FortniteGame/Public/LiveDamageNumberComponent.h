#pragma once
#include "CoreMinimal.h"
#include "LiveDamageNumberComponent.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FLiveDamageNumberComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Component;
    
    FORTNITEGAME_API FLiveDamageNumberComponent();
};

