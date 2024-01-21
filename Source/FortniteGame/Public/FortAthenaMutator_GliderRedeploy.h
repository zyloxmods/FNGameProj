#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_GliderRedeploy.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_GliderRedeploy : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGliderRedeploy;
    
public:
    AFortAthenaMutator_GliderRedeploy();
};

