#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FortSprayManager.generated.h"

class AFortSprayDecalInstance;

UCLASS(Blueprintable)
class UFortSprayManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortSprayDecalInstance*> RegisteredSprays;
    
public:
    UFortSprayManager();
};

