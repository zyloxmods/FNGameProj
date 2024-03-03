#pragma once
#include "CoreMinimal.h"
#include "FortGameFeatureComponentEntry.generated.h"

class AActor;
class UActorComponent;

USTRUCT(BlueprintType)
struct FFortGameFeatureComponentEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActorComponent> ComponentClass;
    
    FORTNITEGAME_API FFortGameFeatureComponentEntry();
};

