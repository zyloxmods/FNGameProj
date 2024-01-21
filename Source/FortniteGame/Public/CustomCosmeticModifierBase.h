#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomCosmeticModifierBase.generated.h"

class AFortPlayerPawn;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ACustomCosmeticModifierBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawn> FortPlayerPawnPtr;
    
public:
    ACustomCosmeticModifierBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFrontEnd() const;
    
};

