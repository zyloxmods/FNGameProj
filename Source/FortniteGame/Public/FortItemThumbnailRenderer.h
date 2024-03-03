#pragma once
#include "CoreMinimal.h"
#include "FortThumbnailRenderer.h"
#include "Templates/SubclassOf.h"
#include "FortItemThumbnailRenderer.generated.h"

class AFortItemCaptureActor;
class UFortItemDefinition;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortItemThumbnailRenderer : public UFortThumbnailRenderer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortItemCaptureActor> CaptureEnvironmentActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PreviewMaterialInstance;
    
public:
    UFortItemThumbnailRenderer();
    UFUNCTION(BlueprintCallable)
    void UpdateItemCapture();
    
    UFUNCTION(BlueprintCallable)
    void SetItemDefinition(UFortItemDefinition* InItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    void InvalidateCapture();
    
    UFUNCTION(BlueprintCallable)
    AFortItemCaptureActor* GetOrCreateCaptureActor(TSubclassOf<AFortItemCaptureActor> ThumbnailCaptureTarget);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetItemPreviewMaterial();
    
};

