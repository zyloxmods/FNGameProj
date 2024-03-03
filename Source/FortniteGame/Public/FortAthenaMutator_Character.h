#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_Character.generated.h"

class UAthenaCharacterItemDefinition;

UCLASS(Blueprintable)
class AFortAthenaMutator_Character : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharacterItemDefinition* ForcedCharacterItemDef;
    
public:
    AFortAthenaMutator_Character();
};

