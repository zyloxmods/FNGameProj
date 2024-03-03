#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NitrogenFareRepData.h"
#include "NitrogenFareDataRepActor.generated.h"

UCLASS(Blueprintable)
class ANitrogenFareDataRepActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FareRepData, meta=(AllowPrivateAccess=true))
    FNitrogenFareRepData FareRepData;
    
    ANitrogenFareDataRepActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FareRepData();
    
};

