#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortPlayerParachute.generated.h"

class AFortPlayerPawn;
class UAthenaGliderItemDefinition;
class UAudioComponent;
class UParticleSystemComponent;
class USkeletalMeshComponent;
class USkeletalMeshComponentBudgeted;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerParachute : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
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
    FRotator LastRotationalMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParachuteTrailParameterName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsCosmeticPreview;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* ParachuteMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailParticles;
    
public:
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
    void OnPlayerPawnSet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGliderFullyDeployed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGliderFullyDeployedAccordingToAnim() const;
    
    UFUNCTION(BlueprintCallable)
    void InitalizeFromItemDef(const UAthenaGliderItemDefinition* InParachuteItemDef, bool bSynchronousLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetParachuteRootMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetFortPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableTrailParticles();
    
    
    // Fix for true pure virtual functions not being implemented
};

