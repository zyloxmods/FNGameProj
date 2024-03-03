#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NitrogenFareValueMeshTransformInfo.h"
#include "NitrogenFareValueIndicator.generated.h"

class APlayerCameraManager;
class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class ANitrogenFareValueIndicator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* InstancedMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNitrogenFareValueMeshTransformInfo> FareValueMeshTransformInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IndicatorValue, meta=(AllowPrivateAccess=true))
    uint8 IndicatorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldActorRotateOnTickToFacePlayerCamera;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* LocalPlayerCameraManager;
    
public:
    ANitrogenFareValueIndicator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IndicatorValue();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnFareIndicatorValueChanged(const uint8 NewIndicatorValue);
    
};

