#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortIndicatorManager.generated.h"

class UFortIndicator;
class UFortMiniMapIndicator;

UCLASS(Blueprintable, MinimalAPI)
class UFortIndicatorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortIndicator*> AllIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortMiniMapIndicator*> MiniMapIndicators;
    
public:
    UFortIndicatorManager();
};

