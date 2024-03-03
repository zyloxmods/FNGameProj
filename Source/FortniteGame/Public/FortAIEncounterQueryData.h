#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAIEncounterQueryData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFortAIEncounterQueryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> QueryLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> QueryActors;
    
    FORTNITEGAME_API FFortAIEncounterQueryData();
};

