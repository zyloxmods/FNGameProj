#pragma once
#include "CoreMinimal.h"
#include "AIPawnUpdateInfo.generated.h"

class AFortAIPawn;

USTRUCT(BlueprintType)
struct FAIPawnUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAIPawn* AIPawn;
    
    FORTNITEGAME_API FAIPawnUpdateInfo();
};

