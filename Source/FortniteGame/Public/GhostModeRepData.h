#pragma once
#include "CoreMinimal.h"
#include "GhostModeRepData.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FGhostModeRepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInGhostMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* GhostModeItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 PreviousFocusedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float TimeExitedGhostMode;
    
    FORTNITEGAME_API FGhostModeRepData();
};

