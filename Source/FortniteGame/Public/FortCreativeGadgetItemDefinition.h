#pragma once
#include "CoreMinimal.h"
#include "AthenaGadgetItemDefinition.h"
#include "FortCreativeGadgetItemDefinition.generated.h"

class UPlaylistUserOptions;

UCLASS(Blueprintable)
class UFortCreativeGadgetItemDefinition : public UAthenaGadgetItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaylistUserOptions* ItemOptions;
    
    UFortCreativeGadgetItemDefinition(const FObjectInitializer& ObjectInitializer);
};

