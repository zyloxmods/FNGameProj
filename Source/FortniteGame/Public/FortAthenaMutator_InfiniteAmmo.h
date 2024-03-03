#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_InfiniteAmmo.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_InfiniteAmmo : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteAmmo;
    
public:
    AFortAthenaMutator_InfiniteAmmo();
};

