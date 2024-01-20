#pragma once
#include "CoreMinimal.h"
#include "ReflectedEngineVersion.h"
#include "FortRecordVersion.generated.h"

USTRUCT(BlueprintType)
struct FFortRecordVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PackageFileVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReflectedEngineVersion EngineVersion;
    
    FORTNITEGAME_API FFortRecordVersion();
};

