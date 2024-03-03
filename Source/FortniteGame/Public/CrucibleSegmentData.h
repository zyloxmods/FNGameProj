#pragma once
#include "CoreMinimal.h"
#include "EFortCrucibleStatType.h"
#include "CrucibleSegmentData.generated.h"

USTRUCT(BlueprintType)
struct FCrucibleSegmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegistered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissedTargetPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCrucibleStatType BackendStatType;
    
    FORTNITEGAME_API FCrucibleSegmentData();
};

