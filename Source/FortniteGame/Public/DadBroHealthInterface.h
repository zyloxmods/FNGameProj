#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EDadBroHealthType.h"
#include "DadBroHealthInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDadBroHealthInterface : public UInterface {
    GENERATED_BODY()
};

class IDadBroHealthInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EDadBroHealthType GetCurrentHealthType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetCurrentHealthPercent() const;
    
};

