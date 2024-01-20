#pragma once
#include "CoreMinimal.h"
#include "AthenaGameMessageData.h"
#include "FortObjectiveMessagesAssetData.generated.h"

USTRUCT(BlueprintType)
struct FFortObjectiveMessagesAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_SafeZonePreObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_SafeZonePostObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_MoveToNextArea;
    
    FORTNITEGAME_API FFortObjectiveMessagesAssetData();
};

