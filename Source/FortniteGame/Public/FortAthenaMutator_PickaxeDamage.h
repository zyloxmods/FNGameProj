#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_PickaxeDamage.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_PickaxeDamage : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PickaxeInstantDestroy;
    
public:
    AFortAthenaMutator_PickaxeDamage();
};

