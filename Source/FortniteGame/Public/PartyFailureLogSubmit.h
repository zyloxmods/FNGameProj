#pragma once
#include "CoreMinimal.h"
#include "PartyFailureLogSubmitReason.h"
#include "PartyFailureLogSubmit.generated.h"

USTRUCT(BlueprintType)
struct FPartyFailureLogSubmit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubmitLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubmitSecondaryLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LogTailKb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartyFailureLogSubmitReason> Reasons;
    
    FORTNITEGAME_API FPartyFailureLogSubmit();
};

