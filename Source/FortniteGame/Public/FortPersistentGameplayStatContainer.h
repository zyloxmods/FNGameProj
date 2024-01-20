#pragma once
#include "CoreMinimal.h"
#include "FortPersistentGameplayStatValue.h"
#include "FortPersistentGameplayStatContainer.generated.h"

USTRUCT(BlueprintType)
struct FFortPersistentGameplayStatContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPersistentGameplayStatValue> GameplayStats;
    
    FORTNITEGAME_API FFortPersistentGameplayStatContainer();
};

