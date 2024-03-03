#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortAthenaAlertStateComponent.generated.h"

class AFortAthenaAIBotController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaAlertStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StealthMeterTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StealthMeterTargetTime;
    
public:
    UFortAthenaAlertStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetStealthMeterTargetTime(const float InStealthMeterTargetTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStealthMeterTarget(const float InStealthMeterTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnStealthMeterChanged(AFortAthenaAIBotController* BotController, float NewStealthMeterTarget, float NewStealthMeterTargetTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStealthMeterTargetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStealthMeterTarget() const;
    
};

