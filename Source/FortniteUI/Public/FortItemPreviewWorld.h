#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrackDynamicBackground.h"
#include "GameplayTagContainer.h"
#include "FortItemPreviewWorld.generated.h"

class AFortItemPreviewSceneChanger;
class AFortStaticMeshActor;
class UChildActorComponent;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class AFortItemPreviewWorld : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PreviewSceneChangerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* BackgroundMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BackgroundMaterialDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildActorComponent* SceneBackgroundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortStaticMeshActor* SceneBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildActorComponent* SceneChangerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortItemPreviewSceneChanger* PreviewSceneChanger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTrackDynamicBackground CachedBackgroundData;
    
public:
    AFortItemPreviewWorld();
protected:
    UFUNCTION(BlueprintCallable)
    void SetBackgroundMaterialDynamic(UMaterialInstanceDynamic* InBackgroundMaterialDynamic);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionBackground(bool bPlayForward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupBackground(const UTexture2D* LoadedBackgroundTexture, const FTrackDynamicBackground& BackgroundInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialBackgroundTransition();
    
};

