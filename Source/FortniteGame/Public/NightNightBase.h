#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NightNightBase.generated.h"

UCLASS(Blueprintable)
class ANightNightBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PrepareClient, meta=(AllowPrivateAccess=true))
    bool bPrepareClient;
    
public:
    ANightNightBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReturnToNight();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PrepareClient();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MakePreparationsForNightNight();
    
};

