#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FortAthenaBTService_Escape.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTService_Escape : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EscapeKeyName;
    
public:
    UFortAthenaBTService_Escape();
};

