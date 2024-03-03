#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnHeavySoundTriggeredDelegate.h"
#include "OnLoopSoundModulatedDelegate.h"
#include "OnLoopSoundTriggeredDelegate.h"
#include "OnMediumSoundTriggeredDelegate.h"
#include "SkeletalAudioBoneInstance.h"
#include "FortSkeletalAudioComponent.generated.h"

class UFortSkeletalAudioAssetBank;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortSkeletalAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSkeletalAudioAssetBank* AudioAssetBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldIgnoreDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAttachOneShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalAudioBoneInstance> BoneInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoopSoundTriggered OnLoopSoundTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoopSoundModulated OnLoopSoundModulated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediumSoundTriggered OnMediumSoundTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeavySoundTriggered OnHeavySoundTriggered;
    
    UFortSkeletalAudioComponent();
    UFUNCTION(BlueprintCallable)
    void SetVolumeMultiplier(float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMesh(USkeletalMeshComponent* NewSkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomTrackedTransform(int32 Index, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetCanPlay(bool CanPlay);
    
};

