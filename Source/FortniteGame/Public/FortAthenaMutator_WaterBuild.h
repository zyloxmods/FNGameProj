#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_WaterBuild.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_WaterBuild : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredFloodHeight;
    
    AFortAthenaMutator_WaterBuild();
};

