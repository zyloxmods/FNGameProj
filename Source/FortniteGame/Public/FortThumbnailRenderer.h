#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortThumbnailRenderer.generated.h"

class AActor;
class UMaterialInterface;
class USceneCaptureComponent2D;
class UTextureRenderTarget2D;
class UWorld;

UCLASS(Abstract, Blueprintable, Within=RealTimeThumbnailSubsystem)
class UFortThumbnailRenderer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* AlphaMaskMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EffectMaskMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* PrivateWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RendererIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SurfaceWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SurfaceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* DiffuseRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* AlphaMaskRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* EffectsRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CaptureComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CaptureTargetPtr;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> AlphaMaskActorPtrs;
    
public:
    UFortThumbnailRenderer();
    UFUNCTION(BlueprintCallable)
    void SetRenderTargetSize(int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureTarget(AActor* InCaptureTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetAlphaMaskedActors(const TArray<AActor*>& InCaptureTarget);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseResources();
    
    UFUNCTION(BlueprintCallable)
    void ReclaimResources();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRendererIndex() const;
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetOrCreateEffectsRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetOrCreateDiffuseRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetOrCreateAlphaMaskRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    void CaptureEffects();
    
    UFUNCTION(BlueprintCallable)
    void CaptureDiffuse();
    
    UFUNCTION(BlueprintCallable)
    void CaptureAlphaMask();
    
};

