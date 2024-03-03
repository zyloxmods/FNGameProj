#pragma once
#include "CoreMinimal.h"
#include "CosmeticOverrideData.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_CosmeticLoadoutOverride.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class AFortAthenaMutator_CosmeticLoadoutOverride : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmeticOverrideData> CosmeticOverrides;
    
public:
    AFortAthenaMutator_CosmeticLoadoutOverride();
};

