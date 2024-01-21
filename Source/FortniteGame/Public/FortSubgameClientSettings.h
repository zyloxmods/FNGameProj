#pragma once
#include "CoreMinimal.h"
#include "FortSubgameClientSettings.generated.h"

USTRUCT(BlueprintType)
struct FFortSubgameClientSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PinnedQuestInstances;
    
    FORTNITEGAME_API FFortSubgameClientSettings();
};

