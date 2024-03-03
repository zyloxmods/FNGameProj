#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortAutoFireTargetInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UFortAutoFireTargetInterface : public UInterface {
    GENERATED_BODY()
};

class IFortAutoFireTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidAutoFireTarget(const AActor* Attacker) const;
    
};

