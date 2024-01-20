#pragma once
#include "CoreMinimal.h"
#include "FortCloudSaveRecordInfo.h"
#include "FortCloudSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortCloudSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCloudSaveRecordInfo> SavedRecords;
    
    FORTNITEGAME_API FFortCloudSaveInfo();
};

