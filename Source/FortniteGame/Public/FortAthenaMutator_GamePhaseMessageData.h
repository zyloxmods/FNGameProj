#pragma once
#include "CoreMinimal.h"
#include "AthenaGameMessageData.h"
#include "FortAthenaMutator_GamePhaseMessageData.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaMutator_GamePhaseMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendIfPhaseSkipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaGameMessageData> Messages;
    
    FORTNITEGAME_API FFortAthenaMutator_GamePhaseMessageData();
};

