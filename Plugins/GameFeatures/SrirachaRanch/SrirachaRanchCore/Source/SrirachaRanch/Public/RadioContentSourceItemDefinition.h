#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "RadioContentSourceItemDefinition.generated.h"

class UFortStreamMediaSource;

UCLASS(Blueprintable)
class URadioContentSourceItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStreamMediaSource* MediaSource;
    
    URadioContentSourceItemDefinition();
};

