#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "StatEventFilter.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_CreativeCombineMinigameStats.generated.h"

class UFortMinigameStatFilter;

UCLASS(Blueprintable)
class AFortAthenaMutator_CreativeCombineMinigameStats : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> ChangingStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatEventFilter StatEventFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatMultiplier;
    
public:
    AFortAthenaMutator_CreativeCombineMinigameStats();
};

