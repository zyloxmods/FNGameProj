#pragma once
#include "CoreMinimal.h"
#include "CrucibleParticipantData.generated.h"

class AFortPlayerControllerAthena;

USTRUCT(BlueprintType)
struct FCrucibleParticipantData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerControllerAthena> AthenaPC;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int64> LatestRetrievedRawStats;
    
    FORTNITEGAME_API FCrucibleParticipantData();
};

