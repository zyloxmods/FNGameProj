#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "EFortDayPhase.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortVFXDataOwner.h"
#include "MarshalledVFXRuntimeData.h"
#include "FortPlayerParachute.generated.h"

class AFortPlayerPawn;
class UAthenaGliderItemDefinition;
class UAudioComponent;
class UFXSystemComponent;
class UFortGliderAudioComponent;
class UFortPlayerGliderAnimSet;
class UParticleSystemComponent;
class USkeletalMeshComponent;
class USkeletalMeshComponentBudgeted;
class USoundBase;

UCLASS(Blueprintable)
class AFortPlayerParachute : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface, public IFortVFXDataOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> GliderOpenSoundFromDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* CurrentGliderOpenSound;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> CurrentGliderOpenAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> GliderCloseSoundFromDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* CurrentGliderCloseSound;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> CurrentGliderCloseAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGliderAudioComponent* FortLayeredAudioComponentGlider;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerPawn, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ParachuteItemDef, meta=(AllowPrivateAccess=true))
    UAthenaGliderItemDefinition* ParachuteItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParachuteHiddenAnimFinishTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGliderFullyDeployed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bChuteOpened: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsFrontEndPreview: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bParachuteVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActivateTrailOnRationalMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMarshalledVFXRuntimeData GliderRuntimeVFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LastRotationalMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParachuteTrailParameterName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsCosmeticPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEtherealBackgroundPreview: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* TrailVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* TrailVFX2;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* ParachuteMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerGliderAnimSet* CurrentGliderPlayerAnimSet;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesDayPhaseChange: 1;
    
    AFortPlayerParachute();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetChuteMeshVisibility(bool bParachuteVisiblity);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerPawn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ParachuteItemDef();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveParachuteItemdef();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPawnSet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGliderFullyDeployed();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetChuteMeshVisibility(bool bParachuteVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGliderFullyDeployedAccordingToAnim() const;
    
    UFUNCTION(BlueprintCallable)
    void InitalizeFromItemDef(const UAthenaGliderItemDefinition* InParachuteItemDef, bool bSynchronousLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetTrailVFXComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetTrailVFX2Component() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetParachuteRootMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetFortPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableTrailParticles();
    
    UFUNCTION(BlueprintCallable)
    void ApplyVariants();
    
    
    // Fix for true pure virtual functions not being implemented
};

