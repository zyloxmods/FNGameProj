#pragma once
#include "CoreMinimal.h"
#include "ArgonPlayerInfo.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FArgonPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    ARGONRUNTIME_API FArgonPlayerInfo();
};

