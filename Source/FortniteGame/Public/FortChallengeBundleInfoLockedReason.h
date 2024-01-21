#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortChallengeBundleInfoLockedReasonCode.h"
#include "FortChallengeBundleInfoLockedReason.generated.h"

USTRUCT(BlueprintType)
struct FFortChallengeBundleInfoLockedReason {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortChallengeBundleInfoLockedReasonCode ReasonCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan UnlockTimespanAfterStart;
    
    FORTNITEGAME_API FFortChallengeBundleInfoLockedReason();
};

