#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_DamageZoneOverride.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_DamageZoneOverride : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
public:
    AFortAthenaMutator_DamageZoneOverride();
};

