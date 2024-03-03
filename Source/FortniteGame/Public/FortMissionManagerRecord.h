#pragma once
#include "CoreMinimal.h"
#include "FortMissionRecord.h"
#include "Templates/SubclassOf.h"
#include "FortMissionManagerRecord.generated.h"

class AFortMissionManager;

USTRUCT(BlueprintType)
struct FFortMissionManagerRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortMissionManager> MissionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionRecord> MissionRecords;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumRequiredMissionsOfType[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> MissionManagerData;
    
    FORTNITEGAME_API FFortMissionManagerRecord();
};

