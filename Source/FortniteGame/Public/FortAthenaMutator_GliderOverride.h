#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_GliderOverride.generated.h"

class UAthenaGliderItemDefinition;

UCLASS(Blueprintable)
class AFortAthenaMutator_GliderOverride : public AFortAthenaMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaGliderItemDefinition* GliderOverride;
    
public:
    AFortAthenaMutator_GliderOverride();
};

