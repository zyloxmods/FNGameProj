#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "UObject/NoExportTypes.h"
#include "FortAITask_RotateToFace.generated.h"

class AActor;

UCLASS(Blueprintable)
class UFortAITask_RotateToFace : public UAITask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FocusTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocalPoint;
    
};

