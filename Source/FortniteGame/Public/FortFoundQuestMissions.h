#pragma once
#include "CoreMinimal.h"
#include "FortAvailableMissionData.h"
#include "FortFoundQuestMissions.generated.h"

USTRUCT(BlueprintType)
struct FFortFoundQuestMissions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TheaterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValidForAllPlayableMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAvailableMissionData> LinkedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAvailableMissionData> TagMatchingMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAvailableMissionData> FallbackMatchingMissions;
    
    FORTNITEGAME_API FFortFoundQuestMissions();
};

