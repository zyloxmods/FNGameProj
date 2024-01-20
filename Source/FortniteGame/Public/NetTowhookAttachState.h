#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "NetTowhookAttachState.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FNetTowhookAttachState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 LocalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 LocalNormal;
    
    FORTNITEGAME_API FNetTowhookAttachState();
};

