#pragma once
#include "CoreMinimal.h"
#include "FortTrapItemDefinition.h"
#include "FortContextTrapItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortContextTrapItemDefinition : public UFortTrapItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTrapItemDefinition* FloorTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTrapItemDefinition* CeilingTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTrapItemDefinition* WallTrap;
    
    UFortContextTrapItemDefinition(const FObjectInitializer& ObjectInitializer);
};

