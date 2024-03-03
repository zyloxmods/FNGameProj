#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_StormAlteration.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class AFortAthenaMutator_StormAlteration : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DisableStormAlterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialOverrides;
    
    AFortAthenaMutator_StormAlteration();
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyStormAlterations();
    
};

