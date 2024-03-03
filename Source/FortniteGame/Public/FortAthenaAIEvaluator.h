#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAthenaAIEvaluator.generated.h"

class IFortAthenaAILODSettings;
class UFortAthenaAILODSettings;
class UBlackboardKeyAccessValidator;

UCLASS(Abstract, Blueprintable)
class UFortAthenaAIEvaluator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExecutionStatusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortAthenaAILODSettings> CachedLODSettingsInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardKeyAccessValidator* KeyAccessValidator;
    
public:
    UFortAthenaAIEvaluator();
};

