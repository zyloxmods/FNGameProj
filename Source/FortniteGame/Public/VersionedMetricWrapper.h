#pragma once
#include "CoreMinimal.h"
#include "ELevelSaveRecordVersion.h"
#include "VersionedMetricWrapper.generated.h"

class UObjectMetric_Legacy;

USTRUCT(BlueprintType)
struct FVersionedMetricWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELevelSaveRecordVersion::Type> IntroducedVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELevelSaveRecordVersion::Type> DeprecatedVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObjectMetric_Legacy> Class;
    
    FORTNITEGAME_API FVersionedMetricWrapper();
};

