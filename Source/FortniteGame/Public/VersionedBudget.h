#pragma once
#include "CoreMinimal.h"
#include "ELevelSaveRecordVersion.h"
#include "VersionedBudget.generated.h"

USTRUCT(BlueprintType)
struct FVersionedBudget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELevelSaveRecordVersion::Type> Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FORTNITEGAME_API FVersionedBudget();
};

