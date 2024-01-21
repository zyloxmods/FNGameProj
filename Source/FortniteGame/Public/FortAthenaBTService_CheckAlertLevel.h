#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EAlertLevel.h"
#include "FortAthenaBTService_CheckAlertLevel.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTService_CheckAlertLevel : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertLevel CurrentAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertLevel ToAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearTarget;
    
public:
    UFortAthenaBTService_CheckAlertLevel();
};

