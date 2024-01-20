#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_CreativeMoveTool.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimInput_CreativeMoveTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFlying;
    
    FORTNITEGAME_API FFortAnimInput_CreativeMoveTool();
};

