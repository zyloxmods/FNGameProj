#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAthenaAIBotAlertLevelConfig.generated.h"

class UAISenseScalableConfig;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAIBotAlertLevelConfig : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlertLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAISenseScalableConfig* ScalableSenseConfig;
    
public:
    UFortAthenaAIBotAlertLevelConfig();
};

