#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "UObject/NoExportTypes.h"
#include "FortAITask_AdjustToSlot.generated.h"

UCLASS(Blueprintable)
class UFortAITask_AdjustToSlot : public UAITask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SlotLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SlotDirection;
};

