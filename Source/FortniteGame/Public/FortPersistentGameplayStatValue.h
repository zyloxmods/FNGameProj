#pragma once
#include "CoreMinimal.h"
#include "FortPersistentGameplayStatValue.generated.h"

USTRUCT(BlueprintType)
struct FFortPersistentGameplayStatValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatValue;
    
    FORTNITEGAME_API FFortPersistentGameplayStatValue();
};

