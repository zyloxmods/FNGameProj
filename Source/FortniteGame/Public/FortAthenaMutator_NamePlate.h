#pragma once
#include "CoreMinimal.h"
#include "EIndicatorDisplayMode.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_NamePlate.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_NamePlate : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DisplayMode, meta=(AllowPrivateAccess=true))
    EIndicatorDisplayMode DisplayMode;
    
public:
    AFortAthenaMutator_NamePlate();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DisplayMode();
    
};

