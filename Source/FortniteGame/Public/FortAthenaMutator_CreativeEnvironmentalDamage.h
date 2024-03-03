#pragma once
#include "CoreMinimal.h"
#include "EAllowedToEdit.h"
#include "FortAthenaMutator_EnvironmentalDamage.h"
#include "FortAthenaMutator_CreativeEnvironmentalDamage.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_CreativeEnvironmentalDamage : public AFortAthenaMutator_EnvironmentalDamage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAllowedToEdit AllowedToEditFilter;
    
public:
    AFortAthenaMutator_CreativeEnvironmentalDamage();
};

