#pragma once
#include "CoreMinimal.h"
#include "AISubsystem.h"
#include "AthenaAIServiceManager.generated.h"

class UAthenaAIService;

UCLASS(Blueprintable)
class UAthenaAIServiceManager : public UAISubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaAIService*> AIServices;
    
public:
    UAthenaAIServiceManager();
};

