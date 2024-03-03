#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EFortAILODLevel.h"
#include "FortAIDirectorPerLODConfig.generated.h"

USTRUCT(BlueprintType)
struct FFortAIDirectorPerLODConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxNPCCosts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAILODLevel FortAILODLevel;
    
    FORTNITEGAME_API FFortAIDirectorPerLODConfig();
};

