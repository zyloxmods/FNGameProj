#pragma once
#include "CoreMinimal.h"
#include "FortWorldItemDefinition.h"
#include "FortNeverPersistItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortNeverPersistItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAccumulateOnPlayerState: 1;
    
    UFortNeverPersistItemDefinition(const FObjectInitializer& ObjectInitializer);
};

