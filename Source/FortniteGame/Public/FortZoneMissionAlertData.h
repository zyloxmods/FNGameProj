#pragma once
#include "CoreMinimal.h"
#include "FortItemQuantityPair.h"
#include "FortZoneMissionAlertData.generated.h"

USTRUCT(BlueprintType)
struct FFortZoneMissionAlertData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> MissionAlertRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString MissionAlertCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString MissionAlertID;
    
    FORTNITEGAME_API FFortZoneMissionAlertData();
};

