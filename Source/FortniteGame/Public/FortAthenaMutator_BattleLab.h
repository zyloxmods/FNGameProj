#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_BattleLab.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_BattleLab : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPortalIndex;
    
public:
    AFortAthenaMutator_BattleLab();
};

