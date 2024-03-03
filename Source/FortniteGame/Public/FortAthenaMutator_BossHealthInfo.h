#pragma once
#include "CoreMinimal.h"
#include "ECreativeBossDisplayMode.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_BossHealthInfo.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_BossHealthInfo : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DisplayMode, meta=(AllowPrivateAccess=true))
    ECreativeBossDisplayMode DisplayMode;
    
public:
    AFortAthenaMutator_BossHealthInfo();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DisplayMode();
    
};

