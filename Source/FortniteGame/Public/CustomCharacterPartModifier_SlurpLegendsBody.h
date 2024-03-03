#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartModifier.h"
#include "SlurpLegendSwapToVariantData.h"
#include "CustomCharacterPartModifier_SlurpLegendsBody.generated.h"

class AFortPlayerStateZone;
class UAnimInstance;
class UMaterialInstanceDynamic;
class UNiagaraComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ACustomCharacterPartModifier_SlurpLegendsBody : public ACustomCharacterPartModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TransformBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* LoopingDrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseShieldOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlurpLegendSwapToVariantData> VariantData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateZone* AssociatedPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* AssociatedAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BodyMID;
    
public:
    ACustomCharacterPartModifier_SlurpLegendsBody();
    UFUNCTION(BlueprintCallable)
    void SetComponentPointers(UParticleSystemComponent* xFormBurst, UNiagaraComponent* DripLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentShieldPercentage() const;
    
};

