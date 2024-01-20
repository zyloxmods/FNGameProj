#pragma once
#include "CoreMinimal.h"
#include "FortGadgetItemDefinition.h"
#include "AthenaGadgetItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaGadgetItemDefinition : public UFortGadgetItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeDroppedWhenEquipmentChangeIsBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedFuelGadgetUI;
    
    UAthenaGadgetItemDefinition();
};

