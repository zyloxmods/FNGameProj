#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EWardAffectType.h"
#include "FortPatrolWardInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortPatrolWardInterface : public UInterface {
    GENERATED_BODY()
};

class IFortPatrolWardInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    EWardAffectType GetAffectingType() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    float GetAffectingDistance() const;
    
};

