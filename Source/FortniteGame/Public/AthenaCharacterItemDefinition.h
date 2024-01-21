#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaCharacterItemDefinition.generated.h"

class UAthenaBackpackItemDefinition;
class UFortHeroType;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaCharacterItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHeroType* HeroDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaBackpackItemDefinition* DefaultBackpack;
    
    UAthenaCharacterItemDefinition();
};

