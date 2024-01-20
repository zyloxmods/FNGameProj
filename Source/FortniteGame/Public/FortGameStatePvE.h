#pragma once
#include "CoreMinimal.h"
#include "FortGameStateZone.h"
#include "FortGameStatePvE.generated.h"

class AFortAircraft;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStatePvE : public AFortGameStateZone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortAircraft* Aircraft;
    
public:
    AFortGameStatePvE();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAircraft* GetAircraft() const;
    
};

