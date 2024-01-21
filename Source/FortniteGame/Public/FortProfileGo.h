#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProfileGoCollection.h"
#include "ProfileGoCommand.h"
#include "ProfileGoScenario.h"
#include "FortProfileGo.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortProfileGo : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProfileGoScenario> ProfileGoScenarios;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProfileGoCollection> ProfileGoCollections;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProfileGoCommand> AllCommands;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSettleTime;
    
public:
    UFortProfileGo();
};

