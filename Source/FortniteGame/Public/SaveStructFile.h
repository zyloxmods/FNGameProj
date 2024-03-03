#pragma once
#include "CoreMinimal.h"
#include "StructRecord.h"
#include "SaveStructFile.generated.h"

USTRUCT(BlueprintType)
struct FSaveStructFile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructRecord> StructRecords;
    
    FORTNITEGAME_API FSaveStructFile();
};

