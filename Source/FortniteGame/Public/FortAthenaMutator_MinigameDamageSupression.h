#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_MinigameDamageSupression.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_MinigameDamageSupression : public AFortAthenaMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPreventPreGameDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPreventPostGameDamage: 1;
    
public:
    AFortAthenaMutator_MinigameDamageSupression();
};

