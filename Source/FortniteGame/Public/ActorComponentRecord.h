#pragma once
#include "CoreMinimal.h"
#include "ActorComponentRecord.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FActorComponentRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActorComponent> ComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ComponentData;
    
    FORTNITEGAME_API FActorComponentRecord();
};

