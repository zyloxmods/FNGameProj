#pragma once
#include "CoreMinimal.h"
#include "EPlayerIndicatorDisplayMode.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_PlayerHealthIndicator.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_PlayerHealthIndicator : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DisplayMode, meta=(AllowPrivateAccess=true))
    EPlayerIndicatorDisplayMode DisplayMode;
    
public:
    AFortAthenaMutator_PlayerHealthIndicator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DisplayMode();
    
};

