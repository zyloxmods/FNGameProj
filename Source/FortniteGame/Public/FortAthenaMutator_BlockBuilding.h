#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_BlockBuilding.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_BlockBuilding : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockBuilding;
    
public:
    AFortAthenaMutator_BlockBuilding();
};

