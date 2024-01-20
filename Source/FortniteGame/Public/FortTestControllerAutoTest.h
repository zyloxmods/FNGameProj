#pragma once
#include "CoreMinimal.h"
#include "EFortAutoTestState.h"
#include "FortTestControllerBase.h"
#include "FortTestControllerAutoTest.generated.h"

UCLASS(Blueprintable)
class UFortTestControllerAutoTest : public UFortTestControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortAutoTestState CurrentState;
    
public:
    UFortTestControllerAutoTest();
};

