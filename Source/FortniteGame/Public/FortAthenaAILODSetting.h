#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAILODSetting.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaAILODSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    FORTNITEGAME_API FFortAthenaAILODSetting();
};

