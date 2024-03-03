#pragma once
#include "CoreMinimal.h"
#include "ELevelSaveRecordVersion.h"
#include "VersionedCostOverride.generated.h"

class UObjectMetric_Legacy;

USTRUCT(BlueprintType)
struct FVersionedCostOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObjectMetric_Legacy> ClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELevelSaveRecordVersion::Type> IntroducedVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELevelSaveRecordVersion::Type> DeprecatedVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideCost;
    
    FORTNITEGAME_API FVersionedCostOverride();
};

