#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "FortAwardItemDefinition.generated.h"

class UFortAwardDetector;

UCLASS(Blueprintable)
class UFortAwardItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleSharedDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEarnMultipleTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAwardDetector> DetectorClass;
    
public:
    UFortAwardItemDefinition(const FObjectInitializer& ObjectInitializer);
};

