#pragma once
#include "CoreMinimal.h"
#include "FortCloudSaveRecordInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortCloudSaveRecordInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecordIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArchiveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RecordFilename;
    
    FORTNITEGAME_API FFortCloudSaveRecordInfo();
};

