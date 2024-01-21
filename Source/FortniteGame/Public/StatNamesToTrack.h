#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStatRecordingPeriod.h"
#include "StatNamesToTrack.generated.h"

USTRUCT(BlueprintType)
struct FStatNamesToTrack : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatRecordingPeriod Period;
    
    FORTNITEGAME_API FStatNamesToTrack();
};

